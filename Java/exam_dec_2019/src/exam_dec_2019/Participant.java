package exam_dec_2019;
import java.util.Random;

public class Participant {
	String nume;
	String prenume;
	int scor;
	
	public Participant(String nume, String prenume) {
		this.nume = nume;
		this.prenume = prenume;
		scor = 0;
	}
	
	public Participant(Participant p) {
		p.nume = nume;
		p.prenume = prenume;
		p.scor = scor;
	}
	
	public String toString() {
		String r = "";
		r+="Participantul " + nume + " " + prenume + " are scorul:" +scor;
		return r;
	}
	
	public void incrementare() {
		this.scor++;
	}
	
	
	
	public int generare() {
		Random rand = new Random();
		int rand_int = rand.nextInt(100);
		return rand_int;
	}
}
