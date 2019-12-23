import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Dishes extends JPanel {
    Color col;
    String material;
    int prise;

    Dishes() {

    }

    // Конструктори
    Dishes(String a) {
        material = a;
    }

    Dishes(String a, int b) {
        material = a;
        prise = b;
    }

    // Методи
    public void paint(Graphics g) {
        g.setColor(col);
        g.drawRect(10, 15, prise, 50);
        g.drawString(material, 50, 10);
    }

    void DrawWindow() {
        JFrame SetWin = new JFrame("Setting dishes");
        GridLayout gbl = new GridLayout(4, 1);
        SetWin.setLayout(gbl);
        SetWin.setLocation(0, 350);

        JButton changeCol = new JButton("");
        changeCol.setBackground(col);
        col = Color.white;

        String[] listMaterials = { "Glass", "Ceramics", "Stainless Steel", "Plastic" };
        JComboBox mat = new JComboBox(listMaterials);

        JTextField prs = new JTextField();
        JLabel L_SetCol = new JLabel("Color:");
        JLabel L_mat = new JLabel("Material:");
        JLabel L_prs = new JLabel("Prise:");
        JButton apply = new JButton("Apply");

        SetWin.getContentPane().add(L_SetCol);
        SetWin.getContentPane().add(changeCol);
        SetWin.getContentPane().add(L_mat);
        SetWin.getContentPane().add(mat);
        SetWin.getContentPane().add(L_prs);
        SetWin.getContentPane().add(prs);
        SetWin.getContentPane().add(apply);

        SetWin.setVisible(true);
        SetWin.setSize(500, 300);

        changeCol.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                col = JColorChooser.showDialog(null, "Choose a background", col);
                changeCol.setBackground(col);
            }
        });
        apply.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                material = (String) mat.getSelectedItem();
                prise = Integer.parseInt(prs.getText());

            }
        });
    }

}
