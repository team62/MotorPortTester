
task main() {
	while(true) {
		motor[port1] 	= vexRT(Btn7U)*127;
		motor[port2] 	= vexRT(Btn7D)*127;
		motor[port3] 	= vexRT(Btn7L)*127;
		motor[port4] 	= vexRT(Btn7R)*127;
		motor[port5] 	= vexRT(Btn8U)*127;
		motor[port6] 	= vexRT(Btn8D)*127;
		motor[port7] 	= vexRT(Btn8L)*127;
		motor[port8] 	= vexRT(Btn8R)*127;
		motor[port9] 	= vexRT(Btn5U)*127;
		motor[port10]	= vexRT(Btn6U)*127;
	}
}
