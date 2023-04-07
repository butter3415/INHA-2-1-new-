package component;

import javax.swing.JFrame;

public class DevFrame extends JFrame {
    public DevFrame(String title, int width, int height) {
        setTitle(title);
        setSize(width, height);
        setResizable(false);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
