package util;

import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;

import javax.imageio.ImageIO;

public class HelperMethod {

	public static BufferedImage getDevSubImage(String path, int x, int y, int width, int height) {
		try {
			BufferedImage img = ImageIO.read(new File(path));
			BufferedImage subImage = img.getSubimage(x, y, width, height);

			return subImage;
		} catch (IOException e) {
			e.printStackTrace();
		}

		return null;
	}
}
