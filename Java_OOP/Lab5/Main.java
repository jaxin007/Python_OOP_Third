import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Main {

    static Dishes Dishes;
    static Cup Cup;

    public static void main(String[] args) {
        JFrame window = new JFrame("Lab5");
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Елементи інтерфейсу:
        GridLayout gbl = new GridLayout(3, 2);
        window.setLayout(gbl);

        String[] listConstr = { "dishes(String a)", "dishes(String a, int b)", "cup(int a, int b, int c)",
                "cup(int a, int b)" };
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
                if (Dishes != null) {
                    window.getContentPane().remove(Dishes);
                    Dishes = null;
                }
                if (Cup != null) {
                    window.getContentPane().remove(Cup);
                    Cup = null;

                }

                if ((String) constr.getSelectedItem() == "dishes(String a)") {
                    Dishes = new Dishes("Glass");
                    window.getContentPane().repaint();
                    window.getContentPane().add(Dishes);
                }
                if ((String) constr.getSelectedItem() == "dishes(String a, int b)") {
                    Dishes = new Dishes("Glass", 10);
                    window.getContentPane().repaint();
                    window.getContentPane().add(Dishes);
                }
                if ((String) constr.getSelectedItem() == "cup(int a, int b, int c)") {
                    Cup = new Cup(23, 12, 43);
                    window.getContentPane().repaint();
                    window.getContentPane().add(Cup);
                }
                if ((String) constr.getSelectedItem() == "cup(int a, int b)") {
                    Cup = new Cup(12, 23);
                    window.getContentPane().repaint();
                    window.getContentPane().add(Cup);
                }
                result.setText("Create object");
            }
        });
        set.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                if (Dishes != null) {
                    Dishes.DrawWindow();
                }
                if (Cup != null) {
                    Cup.DrawWindow();
                }
            }
        });
        showRes.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {

                if (Dishes != null) {
                    window.getContentPane().repaint();
                    window.getContentPane().add(Dishes);
                    result.setText("col:" + Dishes.col + "\n" + "material:" + Dishes.material + "\n" + "prise:"
                            + Dishes.prise);
                }
                if (Cup != null) {
                    window.getContentPane().repaint();
                    window.getContentPane().add(Cup);
                    result.setText(
                            "diameter:" + Cup.diameter + "\n" + "height:" + Cup.height + "\n" + "volume:" + Cup.volume);
                }
            }
        });

    }
}
