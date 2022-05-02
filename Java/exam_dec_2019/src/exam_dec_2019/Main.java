package exam_dec_2019;

public class Main {

	public static void main(String[] args) {
		Participant p1 = new Participant("Alex", "Popescu");
		Participant p2 = new Participant("Albert", "Fantome");
		Partida partida = new Partida(p1, p2);
		partida.mansascormaxim(p1, p2);
		System.out.println(partida.castigator(p1,p2));
	}

}
