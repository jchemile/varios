package stackoverflow;

import java.util.concurrent.TimeUnit;

public class MilisegundosAHora {

public static int convertirAMilisegundos(String tiempo) {
	
    String[] tokens = tiempo.split(":");
    int secondsToMs = Integer.parseInt(tokens[2]) * 1000;
    int minutesToMs = Integer.parseInt(tokens[1]) * 60000;
    int hoursToMs = Integer.parseInt(tokens[0]) * 3600000;
    int total = secondsToMs + minutesToMs + hoursToMs;
    
    return total;

	}
	
	public static void main(String[] args) {
		
	    String source1 = "05:15:30";
	    int total1 = convertirAMilisegundos(source1);
	    
	    String source2 = "03:05:10";
	    int total2 = convertirAMilisegundos(source2);
	    
	    Long t = new Long(total1) + new Long(total2);
	    
	    String hms = String.format("%02d:%02d:%02d", TimeUnit.MILLISECONDS.toHours(t),
	            TimeUnit.MILLISECONDS.toMinutes(t) % TimeUnit.HOURS.toMinutes(1),
	            TimeUnit.MILLISECONDS.toSeconds(t) % TimeUnit.MINUTES.toSeconds(1)); 

	    System.out.print(hms);

	}

	
	
}


