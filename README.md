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