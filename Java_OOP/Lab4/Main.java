import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Main {
    public static void main(String[] args) {
        JFrame frame = new JFrame("First");
        frame.setLayout(null);
        JButton btn = new JButton("Try");
        frame.getContentPane().add(btn);
        btn.setBounds(110, 10, 65, 20);

        JTextField text1 = new JTextField("");
        frame.getContentPane().add(text1);
        text1.setBounds(60, 10, 50, 20);

        JLabel text2 = new JLabel("Input");
        frame.getContentPane().add(text2);
        text2.setBounds(20, 10, 50, 20);
        JLabel text3 = new JLabel("Word to guess: ");
        frame.getContentPane().add(text3);
        text3.setBounds(20, 40, 100, 20);
        JLabel word = new JLabel("****");
        frame.getContentPane().add(word);
        word.setBounds(20, 55, 50, 20);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 400);
        frame.setVisible(true);
        Game g = new Game();

        btn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                Game g = new Game();
                String s = text1.getText();
                char c = s.charAt(0);
                g.guess(c);
                word.setText(String.valueOf(g.hiddenWord));
            }
        });
    }
}
