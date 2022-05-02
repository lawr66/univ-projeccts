package exam_feb_2018;

public class Mamifer {
	String nume;
	double lungime, latime,greutate;
	public Mamifer(Mamifer M){
		nume=M.nume;
		lungime=M.lungime;
		latime=M.latime;
		greutate=M.greutate;
	}
	
	public String toString(){
		String r="Numele mamiferului este :"+this.nume+".";
		r+="Dimensiunile acestui/ei"+this.nume+"sunt:"+this.lungime;
		r+="cm. lungime"+this.latime+"cm. latime si cantareste"+this.greutate+"kg.";
		return r;
		}
	
	public Mamifer() {
		nume = null;
		lungime = 0;
		latime = 0;
		greutate = 0;
	}

	public void change(String nume, double lungime, double latime, double greutate) {
		this.nume = nume;
		this.lungime = lungime;
		this.latime = latime;
		this.greutate = greutate;
	}
	
}
