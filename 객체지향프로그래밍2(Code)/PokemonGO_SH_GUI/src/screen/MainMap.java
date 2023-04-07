package screen;

import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.awt.image.BufferedImage;
import java.awt.image.ImageObserver;
import java.awt.image.ImageProducer;
import java.io.File;
import java.io.IOException;

import javax.imageio.ImageIO;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JPanel;

import component.DevFrame;
import object.Block;
import object.Player;
import program.Program;

public class MainMap extends DevFrame {
	
	public static int[][] map = {
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},			
	};
	
	private Image offScreen = null;
	private Graphics myG = null; 
	
	private Player player = new Player();

	public MainMap(String title, int width, int height) {
		super(title, width, height);

		addKeyListener(new KeyAdapter() {
			@Override
			public void keyPressed(KeyEvent e) {
				super.keyPressed(e);

				switch (e.getKeyCode()) {
				case KeyEvent.VK_W:
					player.isPressed_WASD[0] = true;
					break;
				case KeyEvent.VK_S:
					player.isPressed_WASD[1] = true;
					break;
				case KeyEvent.VK_A:
					player.isPressed_WASD[2] = true;
					break;
				case KeyEvent.VK_D:
					player.isPressed_WASD[3] = true;
					break;
				}
			}

			@Override
			public void keyReleased(KeyEvent e) {
				super.keyReleased(e);

				switch (e.getKeyCode()) {
				case KeyEvent.VK_W:
					player.isPressed_WASD[0] = false;
					break;
				case KeyEvent.VK_S:
					player.isPressed_WASD[1] = false;
					break;
				case KeyEvent.VK_A:
					player.isPressed_WASD[2] = false;
					break;
				case KeyEvent.VK_D:
					player.isPressed_WASD[3] = false;
					break;
				}
			}
		});

		gameLoop();
		player.updatePlayerAnimation(); // ?
	}

	private void gameLoop() {
		Thread thread = new Thread(new Runnable() { // RUNNABLE 모죠?

			@Override
			public void run() {
				// TODO Auto-generated method stub
				while (true) {
					if (player.isPressed_WASD[0]) {
						if (player.playerY > 0)
							player.playerY--;
					}

					if (player.isPressed_WASD[1]) {
						if (player.playerY < 736)
							player.playerY++;
					}

					if (player.isPressed_WASD[2]) {
						if (player.playerX > 0)
							player.playerX--;
					}

					if (player.isPressed_WASD[3]) {
						if (player.playerX < 736)
							player.playerX++;
					}

					repaint();

					try {
						Thread.sleep(4);
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}									
				}
			}
		});
		thread.start();
	}

	@Override
	public void paint(Graphics g) {
		if (myG == null) {
			offScreen = createImage(this.getWidth(), this.getHeight());
			myG = offScreen.getGraphics();
		}

		update(g);
	}

	@Override
	public void update(Graphics g) {
		myG.clearRect(0, 0, this.getWidth(), this.getHeight());
		myG.drawImage(new ImageIcon(Program.path + "/img/main_map.jpg").getImage(), 0, 0, this);
		myG.drawImage(player.playerImg, player.playerX, player.playerY, this);
		
		for (int x = 0; x < 25; x++) {
			for (int y = 0; y < 25; y++) {
				myG.drawRect(10 + (x * 32), 32 + (y * 32), 32, 32);
			
			}
		}
		g.drawImage(offScreen, 0, 0, this);
	}

}