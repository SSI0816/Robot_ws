---
# 2023_1_2
---
* 우분트 설치(20.04ver) Vmware 안에 설치.
    * image 주소 : https://releases.ubuntu.com/focal/ 데스크탑 버전 설치

* ROS2 설치:
    * foxy : sudo apt install ros-foxy-desktop ros-foxy-rmw-fastrtps* ros-foxy-rmw-cyclonedds*
* testpub testsub 으로 ROS2 정상작동 확인.

* vsc  설치:
    *  ubuntu 에서 한글 사용을 위해 .deb 파일을 받아 설치 : sudo dpkg -i code_1.74.2-1671533413_amd64.deb

* turtlesim_node 실행 후 teleop 으로 움직임 확인.

* turtlesim_node 실행 후 rqt 의 node graph, message publisher 으로 움직임 확인.

* ROS2 파이썬 패키지 만들기:
    * 파이썬 패키지 : ros2 pkg create --build-type ament_python (패키지이름)

---
# 2023_1_3
---
* pub,sub 노드 생성:
    * setup.py에서 pub, sub에 대한 엔트리 타임 설정.
    * pub, sub 파이썬 코드 작성.(m_pubsub(mpub.py, msub.py))
    * 노드 생성.(cd ~/robot_ws && colcon build --symlink-install)

* 생성한 pub, sub 노드 실행:
    * 터미널 창에서 실행 : ros2 run m_pubsub mp, ros2 run m_pubsub ms
    * rqt node graph로 정상동작 확인.

* SaaS(Software as a Service) 개념 및 google slide 사용법 숙지.

* turtlesim 거북이 제어:
    * pub(turtle_move) 을 생성하여 Twist 타입의 데이터를 보내 turtlesim 으로 받아 거북이 움직임을 제어.
    * 거북이의 수를 추가, 색을 변경하여 2마리 이상의 거북이 움직임 제어.
        * 거북이 추가 : ros2 service call /spawn turtlesim/srv/Spawn "{x: 5.5, y: 7.0, theta: 1.5, name: "turtle2"}"
        * 거북이 색 변경 : ros2 service call /turtle1/set_pen turtlesim/srv/SetPen "{r: 100, g: 50, b: 200, width : 5}"
        * 삼각함수를 거북이 제어에 사용.

* Python opencv 설치 : python3 -m pip install opencv-python
    * 반전, 회전, 색상 변환 기본 동작 시험.

