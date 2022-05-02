package exam_dec_2019;

public class Partida {
	int nrp1;
	int nrp2;
	Participant p1;
	Participant p2;
	public Partida(Participant p1, Participant p2) {
		
	}
	
	public void mansa(Participant p1, Participant p2) {
		nrp1=p1.generare();
		nrp2=p2.generare();
		if(nrp1>nrp2) {
			p1.incrementare();
		}
		else if(nrp2>nrp1) {
			p2.incrementare();
		}
		
		else System.out.println("Numerele sunt egale.");
		System.out.println("nrp1 = "+nrp1 + " nrp2 = " + nrp2);
		System.out.println("p1 scor " + p1.scor + " p2 scor " + p2.scor);
	}
	
	public void mansascormaxim(Participant p1, Participant p2) {
		while(p1.scor<10 && p2.scor < 10) {
			mansa(p1, p2);
		}
	}
	
	public Participant castigator(Participant p1, Participant p2) {
		if(p1.scor==10) return p1;
		else return p2;
	}
}
