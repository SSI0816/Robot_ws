import rclpy
from rclpy.node import Node
from test_interface.srv import AddThreeInts
from test_interface.srv import MinusThreeInts
from rclpy.qos import QoSProfile

class Num_srv(Node):
    def __init__(self):
        super().__init__('add_int_service')
        self.service_srv= self.create_service(AddThreeInts, 'add_ints', self.int_callback)
        self.service_srv= self.create_service(MinusThreeInts, 'minus_ints', self.int_minus_callback)

    def int_callback(self, request, response):
        self.sum = request.a + request.b + request.c
        response.sum = self.sum
        self.get_logger().info(f'Add request \n a: {request.a}, b: {request.b}, c: {request.c}')
        return response

    def int_minus_callback(self, request, response):
        self.sum = request.a - request.b - request.c
        response.sum = self.sum
        self.get_logger().info(f'Minus request \n a: {request.a}, b: {request.b}, c: {request.c}')
        return response

def main(args =None) :
    rclpy.init(args=args)
    node = Num_srv()
    try :
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard interrupt!!!!')
    finally :
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()