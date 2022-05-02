package exam_feb_2018;

public class Zoo {
	Mamifer lista[] = new Mamifer[10];
	int last_index = 0;
	
	public Zoo(int li) {
		for(int i =0; i<li; i++)
		{
			lista[i] = new Mamifer();
		}
		last_index = li;
	}
	
	int i = 0;
	
	public void adaugare(Mamifer M) {
		lista[i] = new Mamifer(M);
		i++;
	}
	
	public String toString() {
		String r;
		r = "In lista sunt " + last_index + " de mamifere: ";
		for(int i = 0; i<last_index; i++) {
		/*	if (lista[i]!=null) r+= "\n" + lista[i];
			else break;
		}
		r+="\n Restul mamiferelor sunt nule";*/
			if (lista[i].nume == null) {
				r += "\nRestul de " + (int)(last_index - i) + " sunt nule.";
				break;
			}
			r += "\n" + lista[i];
		}
		return r;
	}
	
	int j=0;
	
	public Mamifer[] cautare(String nume) {
		Mamifer m[] = new Mamifer[10];
		for(int i = 0; i <last_index; i++)
			if(nume.equals(lista[i].nume)) {
				m[j]=lista[i];
				j++;
			}
		return m;
	}
	
	public String rezultat(Mamifer[] m) {
		String r = "";
		for(int i = 0; i<j; i++) {
			r+=m[i] + " ";
		}
		return r;
	}
}
