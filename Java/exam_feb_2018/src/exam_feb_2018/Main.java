package exam_feb_2018;

public class Main {

	public static void main(String[] args) {
		Mamifer A = new Mamifer();
		Mamifer B = new Mamifer();
		Mamifer C = new Mamifer(A);
		A.change("Leu", 2.2, 1.1, 200);
		B.change("Lup", 1.2, 0.5, 80);
		System.out.println(A);
		System.out.println(B);
		System.out.println(C);
		Zoo Z = new Zoo(10);
		Z.adaugare(A);
		Z.adaugare(B);
		Z.adaugare(C);
		System.out.println(Z);
	//	Z.cautare("Lup");
		System.out.println(Z.rezultat(Z.cautare("Lup")));
	}

}
