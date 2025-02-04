# initializes the system: create message queue, export pwms and gpios
add_executable(crazy-car-init crazy-car-init.cpp crazy-car-config.cpp)
target_link_libraries(crazy-car-init toolcase-ipc toolcase-base)

# main program
add_executable(crazy-car crazy-car.cpp crazy-car-config.cpp)
target_link_libraries(crazy-car toolcase-ipc toolcase-base)

# commandline client programs: post messages in crazy-car message
# Queue
add_executable(crazy-car-shell crazy-car-shell.cpp)
target_link_libraries(crazy-car-shell toolcase-ipc)

add_executable(mq-test-readout mq-test-readout.cpp)
target_link_libraries(mq-test-readout toolcase-ipc)

# hardware test programs
add_executable(servo-hw-test servo-hw-test.cpp)
target_link_libraries(servo-hw-test toolcase-base)

add_executable(pwm-test pwm-test.cpp)
target_link_libraries(pwm-test toolcase-base)

add_executable(lm73 lm73.cpp)
add_executable(rt-test rt-test.cpp)

add_executable(motor-hw-test motor-hw-test.cpp)
target_link_libraries(motor-hw-test toolcase-base)

add_executable(bno055-test bno055-test.cpp)
target_link_libraries(bno055-test toolcase-base)

add_executable(bno055-csv-test bno055-csv-test.cpp)
target_link_libraries(bno055-csv-test toolcase-base)

add_executable(proximity-vl53l1x-prog proximity-vl53l1x-prog.cpp)
target_link_libraries(proximity-vl53l1x-prog toolcase-base)

# MQTT

# add_executable(sensor-into-cloud sensor-into-cloud.cpp)
# target_link_libraries(sensor-into-cloud toolcase-base Mosquitto::Mosquitto)
