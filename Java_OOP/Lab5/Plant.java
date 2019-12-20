package Lab5;

import com.sun.deploy.panel.JavaPanel;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Plant extends JavaPanel {
    Color col;
    String type;
    int size;

    Plant(){

    }

    Plant(String a){
        type = a;
    }

    Plant(String a, int s){
        type = a;
        size = s;
    }

    public void paint (Graphics g)
    {
        g.setColor(col);
        g.drawRect(10,15,size,50);
        g.drawString(type, 50, 10);
    }

    void DrawWindow()
    {
        JFrame SetWin = new JFrame("Setting dishes");
        GridLayout gbl = new GridLayout(4,1);
        SetWin.setLayout(gbl);
        SetWin.setLocation(0,350);


        JButton changeCol = new JButton("");
        changeCol.setBackground(col);
        col = Color.white;

        String[] listMaterials = {
                "Green algae",
                "Bryophytes",
                "Higher spore plants",
                "Seed plants"
        };
        JComboBox mat = new JComboBox(listMaterials);

        JTextField  prs = new JTextField();
        JLabel L_SetCol = new JLabel("Color:");
        JLabel L_mat = new JLabel("Type:");
        JLabel L_prs = new JLabel("Size:");
        JButton apply = new JButton("Apply");

        SetWin.getContentPane().add(L_SetCol);
        SetWin.getContentPane().add(changeCol);
        SetWin.getContentPane().add(L_mat);
        SetWin.getContentPane().add(mat);
        SetWin.getContentPane().add(L_prs);
        SetWin.getContentPane().add(prs);
        SetWin.getContentPane().add(apply);

        SetWin.setVisible(true);
        SetWin.setSize(500,300);

        changeCol.addActionListener(new ActionListener()
                                    {
                                        public void actionPerformed(ActionEvent e)
                                        {
                                            col = JColorChooser.showDialog(null, "Choose a background",col);
                                            changeCol.setBackground(col);
                                        }
                                    }
        );
        apply.addActionListener(new ActionListener()
                                {
                                    public void actionPerformed(ActionEvent e)
                                    {
                                        type = (String)mat.getSelectedItem();
                                        size = Integer.parseInt(prs.getText());

                                    }
                                }
        );
    }
}
