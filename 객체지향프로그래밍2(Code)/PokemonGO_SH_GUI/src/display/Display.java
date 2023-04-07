package display;


import javax.swing.*;

import component.DevFrame;
import program.Program;
import screen.MainMap;

import java.awt.event.ActionEvent;

public class Display extends DevFrame {	

    public Display(String title, int width, int height) {
    	super(title, width, height);
    	
        JLabel label = new JLabel(new ImageIcon(Program.path + "/img/main_menu_background.jpg"));
        label.setLayout(null);
        add(label);
        
        JButton startBtn = new JButton();      
        startBtn.addActionListener(this::clickStartBtn);
        startBtn.setBorderPainted(false);
        startBtn.setFocusPainted(false);
        startBtn.setContentAreaFilled(false);
        startBtn.setIcon(new ImageIcon(Program.path + "/img/start_btn.png"));
        startBtn.setRolloverIcon(new ImageIcon(Program.path + "/img/start_btn2.png"));
        startBtn.setBounds(300, 285, 240, 136);
        label.add(startBtn);                      
    }
    
    private void clickStartBtn(ActionEvent e) {
    	dispose();
    	new MainMap("POKEMON GO", 800, 800).setVisible(true);
    }
}



