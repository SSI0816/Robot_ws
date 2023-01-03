import cv2
import numpy as np

print(cv2.__version__)
image = cv2.imread("face.jpeg", cv2.IMREAD_UNCHANGED)
height,width,channel = image.shape
print(height)
print(width)
print(channel)
# 반전
image2 = cv2.flip(image,0)
# 회전
rotate = cv2.getRotationMatrix2D((width / 2, height / 2), 90, 1)
iamge_rotate = cv2.warpAffine(image, rotate, (0,0))
# 색상 변환
image_gray = cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)

cv2.imshow("image2", image2)
cv2.imshow("image", image)
cv2.imshow("image_rotate", iamge_rotate)
cv2.imshow("gray", image_gray)
cv2.waitKey(0)
cv2.destroyAllWindows()

