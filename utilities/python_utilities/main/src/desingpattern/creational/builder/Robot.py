class Robot:
    def __init__(self):
        self.bipedal = False
        self.quadripedal = False
        self.wheeled = False
        self.flying = False
        self.traversal = []
        self.detection_system = []

    def __str__(self):
        string = ""
        if self.bipedal:
            string += "BIPEDAL "
        if self.quadripedal:
            string += "QUADRIPEDAL "
        if self.flying:
            string += "FLYING ROBOT "
        if self.wheeled:
            string += "ROBOT ON WHEELS\s "
        else:
            string += "ROBOT\n"

        if self.traversal:
            string += "Traversal modules insalled:\n"

        for module in self.traversal:
            string += "- " + str(module) + "\n"

        if self.detection_system:
            string += "Detection system installed:\n"

        for system in self.detection_system:
            string += "- " + str(system) + "\n"

        return string


class BipedalLegs:
    def __str__(self):
        return "two legs"

class QuadripedalLegs:
    def __str__(self):
        return "four legs"

class Arms:
    def __str__(self):
        return "four legs"

class Wings:
    def __str__(self):
        return "wings"

class Blades:
    def __str__(self):
        return "blades"

class FourWheels:
    def __str__(self):
        return "four wheels"

class TwoWheels:
    def __str__(self):
        return "two wheels"

class CameraDetectionSystem:
    def __str__(self):
        return "cameras"

class InfraredDetectionSystem:
    def __str__(self):
        return "infrared"


