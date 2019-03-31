import serial
import time

ser=serial.Serial('COM6',9600)
while 1:
    t_end=time.time() + 1
    while(time.time() < t_end):
        val='0'
        val1 = val.encode('ascii')
        ser.write(val1)
        #break;        
    t_end2=time.time() + 3
    while(time.time() < t_end2):
        val='1'
        val1 = val.encode('ascii')
        ser.write(val1)
    

