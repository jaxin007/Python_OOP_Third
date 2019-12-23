import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Cup extends Dishes {
    int diameter;
    int height;
    int volume;

    // Конструктори
    Cup(int a, int b, int c) {
        diameter = a;
        height = b;
        volume = c;
    }

    Cup(int a, int b) {
        diameter = a;
        height = b;
        volume = a * b;
    }

    @Override
    public void paint(Graphics g) {
        g.drawOval(20, diameter, height, volume);
    }

    void DrawWindow() {
        JFrame SetWin = new JFrame("Setting cup");
        GridLayout gbl = new GridLayout(4, 1);
        SetWin.setLayout(gbl);
        SetWin.setLocation(0, 350);

        JTextField diam = new JTextField();
        JTextField heig = new JTextField();
        JTextField vol = new JTextField();
        JLabel L_diam = new JLabel("diameter:");
        JLabel L_heig = new JLabel("height:");
        JLabel L_vol = new JLabel("volume:");
        JButton apply = new JButton("Apply");

        SetWin.getContentPane().add(L_diam);
        SetWin.getContentPane().add(diam);
        SetWin.getContentPane().add(L_heig);
        SetWin.getContentPane().add(heig);
        SetWin.getContentPane().add(L_vol);
        SetWin.getContentPane().add(vol);
        SetWin.getContentPane().add(apply);
        SetWin.setVisible(true);
        SetWin.setSize(500, 300);

        apply.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                diameter = Integer.parseInt(diam.getText());
                height = Integer.parseInt(heig.getText());
                volume = Integer.parseInt(vol.getText());
            }
        });
    }

}
