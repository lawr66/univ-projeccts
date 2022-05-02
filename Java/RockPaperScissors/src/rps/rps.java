package rps;


import java.util.Random;
import java.util.Scanner;

public class rps {
  /*  public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("How many rounds of Rock-Paper-Scissors would you like to play?");
        int rounds = Integer.parseInt(scanner.nextLine());

        for (int i = 0; i < rounds; i++) {
            playRockPaperScissors(scanner);
        }
    }

    static void playRockPaperScissors(Scanner scanner) {
        // Getting input from the user
        System.out.println("Make a move! (rock/paper/scissors)");
        String playerMove = scanner.nextLine();

        // Getting input from the computer
        Random random = new Random();
        int randomNumber = random.nextInt(3);

        String computerMove;
        if (randomNumber == 0) {
            computerMove = "rock";
        } else if (randomNumber == 1) {
            computerMove = "paper";
        } else {
            computerMove = "scissors";
        }
        System.out.println("Computer chose " + computerMove + "!");

        // Print results
        if (playerMove.equals(computerMove)) {
            System.out.println("It's a draw!");
        } else if (playerWins(playerMove, computerMove)) {
            System.out.println("Player wins!");
        } else {
            System.out.println("Computer wins!");
        }
    }

    static boolean playerWins(String playerMove, String computerMove) {
        if (playerMove.equals("rock")) {
            return computerMove.equals("scissors");
        } else if (playerMove.equals("paper")) {
            return computerMove.equals("rock");
        } else {
            return computerMove.equals("paper");
        }
    }
}*/
	public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Cate runde doriti sa jucati?");
    int rounds = Integer.parseInt(scanner.nextLine());

    for (int i = 0; i < rounds; i++) {
        phf(scanner);
    }
}

	static void phf(Scanner scanner) {
    System.out.println("Alegeti dintre: piatra | hartie | foarfeca");
    String jucator = scanner.nextLine();

    // Getting input from the computer
    Random random = new Random();
    int randomNumber = random.nextInt(3);

    String computer;
    if (randomNumber == 0) {
        computer  = "piatra";
    } else if (randomNumber == 1) {
        computer = "hartie";
    } else {
        computer = "foarfeca";
    }
    System.out.println("Computerul a ales " + computer + "!");

    // Afisare rezultat
    if (jucator.equals(computer)) {
        System.out.println("Egalitate!");
    } else if (jucatorulcastiga(jucator, computer)) {
        System.out.println("Jucatorul a castigat!");
    } else {
        System.out.println("Computerul a castigat!");
    }
}

static boolean jucatorulcastiga(String jucator, String computer) {
    if (jucator.equals("piatra")) {
        return computer.equals("foarfeca");
    } else if (jucator.equals("hartie")) {
        return computer.equals("piatra");
    } else {
        return computer.equals("hartie");
    }
}
}


	
	
	