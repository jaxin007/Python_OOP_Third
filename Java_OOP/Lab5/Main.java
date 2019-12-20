package Lab5;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Main {
    static Plant Palnt;
    static Flower Flower;

    public static void main(String[] args) {
        JFrame window = new JFrame("Lab5");
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Елементи інтерфейсу:
        GridLayout gbl = new GridLayout(3, 2);
        window.setLayout(gbl);

        String[] listConstr = { "Plant(String a)", "Plant(String a, int b)", "Flower(int a, int b, int c)",
                "Flower(int a, int b)" };
        JPanel pnl = new JPanel();
        JButton set = new JButton("Setting");
        JComboBox constr = new JComboBox(listConstr);
        JButton create = new JButton("Create");
        JTextArea result = new JTextArea();
        JButton showRes = new JButton("Result");
        // Виведення елементів в вікно
        window.getContentPane().add(constr);
        window.getContentPane().add(create);
        window.getContentPane().add(showRes);
        window.getContentPane().add(result);
        window.getContentPane().add(set);
        // window.getContentPane().add(pnl);

        window.setVisible(true);
        window.setSize(500, 300);

        create.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                if (Palnt != null) {
                    window.getContentPane().remove(Palnt);
                    Palnt = null;
                }
                if (Flower != null) {
                    window.getContentPane().remove(Flower);
                    Flower = null;

                }

                if ((String) constr.getSelectedItem() == "Plant(String a)") {
                    Palnt = new Plant("Glass");
                    window.getContentPane().repaint();
                    window.getContentPane().add(Palnt);
                }
                if ((String) constr.getSelectedItem() == "Plant(String a, int b)") {
                    Palnt = new Plant("Glass", 10);
                    window.getContentPane().repaint();
                    window.getContentPane().add(Palnt);
                }
                if ((String) constr.getSelectedItem() == "Flower(int a, int b, int c)") {
                    Flower = new Flower(23, 12, 43);
                    window.getContentPane().repaint();
                    window.getContentPane().add(Flower);
                }
                if ((String) constr.getSelectedItem() == "Flower(int a, int b)") {
                    Flower = new Flower(12, 23);
                    window.getContentPane().repaint();
                    window.getContentPane().add(Flower);
                }
                result.setText("Create object");
            }
        });
        set.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                if (Palnt != null) {
                    Palnt.DrawWindow();
                }
                if (Flower != null) {
                    Flower.DrawWindow();
                }
            }
        });
        showRes.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {

                if (Palnt != null) {
                    window.getContentPane().repaint();
                    window.getContentPane().add(Palnt);
                    result.setText("col:" + Palnt.col + "\n" + "type:" + Palnt.type + "\n" + "size:" + Palnt.size);
                }
                if (Flower != null) {
                    window.getContentPane().repaint();
                    window.getContentPane().add(Flower);
                    result.setText("diameter:" + Flower.diameter + "\n" + "height:" + Flower.height + "\n" + "allsize:"
                            + Flower.allsize);
                }
            }
        });

    }
}
