import serial
import time

a = 0;
ser = serial.Serial('COM13', baudrate = 115200, timeout =1)


while 1:
    arduinoData = ser.readline().decode('ascii')
    print(arduinoData)
    a = a + int(arduinoData)
    #print('\n')
    print(a)
    time.sleep(0.100) #delay of 0.1 sec or 100 millisecond
    
