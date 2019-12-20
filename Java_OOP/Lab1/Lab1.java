import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Lab1 {
    public static void main(String[] args) {
        JFrame frame = new JFrame("First");
        frame.setSize(100, 80);
        frame.setVisible(true);

        JButton btn = new JButton("Start");
        frame.getContentPane().add(btn, BorderLayout.EAST);

        JTextField tf = new JTextField();
        frame.getContentPane().add(tf, BorderLayout.CENTER);

        JTextField tf1 = new JTextField();
        frame.getContentPane().add(tf1, BorderLayout.SOUTH);

        btn.setLocation(10, 10);
        btn.setSize(160, 50);

        btn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String s = tf.getText();
                String result = fapfap(s);
                tf1.setText(result);
            }
        });

    }

    static String fapfap(String s) {
        char[] c = s.toCharArray();
        for (int i = 0; i < c.length - 1; i += 2) {
            char t = c[i];
            c[i] = c[i + 1];
            c[i + 1] = t;
        }
        return String.valueOf(c);
    }
}
