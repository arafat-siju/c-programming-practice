''' from chatgpt '''
import cv2
import pyautogui

# Load pre-trained models for face and eyes
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
eye_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_eye.xml')

# Start the webcam
cap = cv2.VideoCapture(0)

screen_width, screen_height = pyautogui.size()

while True:
    ret, frame = cap.read()
    if not ret:
        break

    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    faces = face_cascade.detectMultiScale(gray, 1.3, 5)

    for (x, y, w, h) in faces:
        roi_gray = gray[y:y+h, x:x+w]
        roi_color = frame[y:y+h, x:x+w]
        eyes = eye_cascade.detectMultiScale(roi_gray)
        
        for (ex, ey, ew, eh) in eyes:
            # Get the center of the eye
            eye_center_x = x + ex + ew // 2
            eye_center_y = y + ey + eh // 2

            # Map camera position to screen position
            screen_x = int(screen_width * eye_center_x / frame.shape[1])
            screen_y = int(screen_height * eye_center_y / frame.shape[0])

            pyautogui.moveTo(screen_x, screen_y)

            cv2.circle(frame, (eye_center_x, eye_center_y), 10, (0, 255, 0), 2)
    
    cv2.imshow('Eye Tracker', frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
