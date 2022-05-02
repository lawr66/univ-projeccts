package x0;
import java.util.*;

public class x0 {

		
		static String[] tabla;	//declarare tabla de joc
		static String randul;	//declararea randului jucatorului
		
		static String castigator()	//verificare daca a castigat cineva
		{
			for (int a = 0; a < 8; a++) {
				String line = null;

				switch (a) {
				case 0:
					line = tabla[0] + tabla[1] + tabla[2];
					break;
				case 1:
					line = tabla[3] + tabla[4] + tabla[5];
					break;
				case 2:
					line = tabla[6] + tabla[7] + tabla[8];
					break;
				case 3:
					line = tabla[0] + tabla[3] + tabla[6];
					break;
				case 4:
					line = tabla[1] + tabla[4] + tabla[7];
					break;
				case 5:
					line = tabla[2] + tabla[5] + tabla[8];
					break;
				case 6:
					line = tabla[0] + tabla[4] + tabla[8];
					break;
				case 7:
					line = tabla[2] + tabla[4] + tabla[6];
					break;
				}
				// X castiga
				if (line.equals("XXX")) {
					return "X";
				}
				
				// 0 Castiga
				else if (line.equals("OOO")) {
					return "O";
				}
			}
			
			for (int a = 0; a < 9; a++) {
				if (Arrays.asList(tabla).contains(
						String.valueOf(a + 1))) {
					break;
				}
				else if (a == 8) {
					return "Egalitate";
				}
			}

		// To enter the X Or O at the exact place on tabla.
			System.out.println("e randul lui: " +
				randul + " introduceti un "
				+ randul + " in:");
			return null;
		}
		
		// Pentru afisarea tablei
		/* 
		|---|---|---|
		| 1 | 2 | 3 |
		|-----------|
		| 4 | 5 | 6 |
		|-----------|
		| 7 | 8 | 9 |
		|---|---|---|*/
		
		static void afisaretabla()
		{
			System.out.println("|---|---|---|");
			System.out.println("| " + tabla[0] + " | "
							+ tabla[1] + " | " + tabla[2]
							+ " |");
			System.out.println("|-----------|");
			System.out.println("| " + tabla[3] + " | "
							+ tabla[4] + " | " + tabla[5]
							+ " |");
			System.out.println("|-----------|");
			System.out.println("| " + tabla[6] + " | "
							+ tabla[7] + " | " + tabla[8]
							+ " |");
			System.out.println("|---|---|---|");
		}

		public static void main(String[] args)	//declarare main
		{
			Scanner in = new Scanner(System.in);	//declarare scanner, pentru alegerea jucatorullui
			tabla = new String[9];	//declararea tablei
			randul = "X";	// X incepe
			String castigatorul = null;	// castigatorul inca nu se stie, il initializam cu null

			for (int a = 0; a < 9; a++) {
				tabla[a] = String.valueOf(a + 1);
			}

			System.out.println("Bun venit la jocul de X si 0");
			afisaretabla();

			System.out.println(
				"X va incepe. Introduceti o pozitie unde sa puneti un X:");

			while (castigatorul == null) {
				int pozitie;
				
			// Exception handling.
			// pozitie will take input from user like from 1 to 9.
			// If it is not in range from 1 to 9.
			// then it will show you an error "Invalid input."
				
			/*
				 Vom verifica exceptii, deoarece pozitia poate fi de la 1 la 9
				 Daca nu este un numar intre 1 si 9, se va afisa o eroare
				 "Pozitie invalida"
			*/
				try {
					pozitie = in.nextInt();
					if (!(pozitie > 0 && pozitie <= 9)) {
						System.out.println(
							"Pozitia invalida, introduceti pozitia din nou:");
						continue;
					}
				}
				catch (InputMismatchException e) {
					System.out.println(
						"Pozitia invalida, introduceti pozitia din nou:");
					continue;
				}
				
				// Verificarea a cui rand este.
				if (tabla[pozitie - 1].equals(
						String.valueOf(pozitie))) {
					tabla[pozitie - 1] = randul;

					if (randul.equals("X")) {
						randul = "O";
					}
					else {
						randul = "X";
					}

					afisaretabla();
					castigatorul = castigator();
				}
				else {
					System.out.println(
						"Pozitia este deja ocupata.");
				}
			}
			
			// Daca nu castiga niciun jucator este egalitate
			if (castigatorul.equalsIgnoreCase("egalitate")) {
				System.out.println(
					"Egalitate.");
			}
			
			// afisarea castigatorului
			else {
				System.out.println(
					castigatorul
					+ " a castigat.");
			}
		}
	}


