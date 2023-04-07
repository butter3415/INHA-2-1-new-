package program;

import display.Display;

public class Program {
	
	public static String path = System.getProperty("user.dir").replace("\\", "/") + "/resource/"; 

	public static void main(String[] args) {
		new Display("POKEMON GO", 800, 800).setVisible(true);
	}
}
