package object;

import java.awt.image.BufferedImage;

import program.Program;
import util.HelperMethod;

public class Player {

	private String player_img_path = Program.path + "/img/player_sprite_sheet.png";
	
	private BufferedImage[] frontPlayerImg = { HelperMethod.getDevSubImage(player_img_path, 0, 0, 64, 64),
			HelperMethod.getDevSubImage(player_img_path, 64, 0, 64, 64),
			HelperMethod.getDevSubImage(player_img_path, 128, 0, 64, 64),
			HelperMethod.getDevSubImage(player_img_path, 192, 0, 64, 64) };

	private BufferedImage[] backPlayerImg = { HelperMethod.getDevSubImage(player_img_path, 0, 192, 64, 64),
			HelperMethod.getDevSubImage(player_img_path, 64, 192, 64, 64),
			HelperMethod.getDevSubImage(player_img_path, 128, 192, 64, 64),
			HelperMethod.getDevSubImage(Program.path + "/img/player_sprite_sheet.png", 192, 192, 64, 64) };

	private BufferedImage[] leftPlayerImg = { HelperMethod.getDevSubImage(player_img_path, 0, 64, 64, 64),
			HelperMethod.getDevSubImage(player_img_path, 64, 64, 64, 64),
			HelperMethod.getDevSubImage(player_img_path, 128, 64, 64, 64),
			HelperMethod.getDevSubImage(player_img_path, 192, 64, 64, 64) };

	private BufferedImage[] rightPlayerImg = { HelperMethod.getDevSubImage(player_img_path, 0, 128, 64, 64),
			HelperMethod.getDevSubImage(player_img_path, 64, 128, 64, 64),
			HelperMethod.getDevSubImage(player_img_path, 128, 128, 64, 64),
			HelperMethod.getDevSubImage(player_img_path, 192, 128, 64, 64) };
	
	public BufferedImage playerImg = frontPlayerImg[0]; 

	public int[] playerImageIndex = { 0, 0, 0, 0 };
	
	public int playerX = 320; 
	public int playerY = 320; 
	
	public boolean[] isPressed_WASD = { false, false, false, false };

	public void updatePlayerAnimation() {
		Thread thread = new Thread(new Runnable() {

			@Override
			public void run() {
				while (true) {
					try {
						if (isPressed_WASD[1]) {

							if (playerImageIndex[0] == 3) {
								playerImageIndex[0] = 0;
							} else {
								playerImageIndex[0]++;
							}

							playerImg = frontPlayerImg[playerImageIndex[0]];
						}

						if (isPressed_WASD[0]) {

							if (playerImageIndex[0] == 3) {
								playerImageIndex[0] = 0;
							} else {
								playerImageIndex[0]++;
							}

							playerImg = backPlayerImg[playerImageIndex[0]];
						}

						if (isPressed_WASD[2]) {

							if (playerImageIndex[0] == 3) {
								playerImageIndex[0] = 0;
							} else {
								playerImageIndex[0]++;
							}

							playerImg = leftPlayerImg[playerImageIndex[0]];
						}

						if (isPressed_WASD[3]) {

							if (playerImageIndex[0] == 3) {
								playerImageIndex[0] = 0;
							} else {
								playerImageIndex[0]++;
							}

							playerImg = rightPlayerImg[playerImageIndex[0]];
						}

						Thread.sleep(100);
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
				}
			}
		});
		thread.start();
	}
}
