import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JOptionPane;
import javax.imageio.ImageIO;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;
import javax.swing.JFileChooser;
import javax.swing.JMenuBar;
import javax.swing.JMenu;
import javax.swing.JMenuItem;
import java.awt.Desktop;
import java.awt.image.BufferedImage;
import java.awt.Graphics2D;
import java.io.File;
import java.io.IOException; 

public class Interfata {
	private static JLabel userLabel;
	private static JTextField userText;
	private static JLabel passwordLabel;
	private static JPasswordField passwordText;
	private static JLabel hostLabel;
	private static JTextField hostText;
	private static JButton buttonLogin;
	private static JButton buttonConnect;
	private static JButton buttonExit;
	private static JButton buttonExitMain;
	private static JButton buttonFileChooser;
	private static JButton buttonPreview;
	private static JButton buttonReboot;
	private static JButton buttonImage;
	private static JButton buttonUpload;
	private static File folder = new File("src/");
	private static Desktop desktop = Desktop.getDesktop();
	private static File file;
//	static Conectare connect = new Conectare();
	
	public static void GUI() {
		JPanel panelMain = new JPanel();
		JFrame frameMain = new JFrame("Picture changer");
		frameMain.setSize(500,325);
		frameMain.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frameMain.add(panelMain);
		
		panelMain.setLayout(null);
		
		JMenuBar menuBar = new JMenuBar();
		frameMain.setJMenuBar(menuBar);
		JMenu menu = new JMenu("Menu");
		menuBar.add(menu);
		
		JMenuItem openSrc = new JMenuItem("Open images folder");
		menu.add(openSrc);
		openSrc.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				try {
					desktop.open(folder);
				} catch (IOException ioe) {
					ioe.printStackTrace();
				}
				
			}
		});
		
		menu.addSeparator();
		JMenuItem about = new JMenuItem("About");
		menu.add(about);
		about.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				JOptionPane.showMessageDialog(null, "Acesta este un test.");
			}
			
		});
		
		buttonConnect = new JButton("Connect");
		buttonConnect.setBounds(175, 10, 150, 25);
		buttonConnect.addActionListener(new ActionListener()
				{
					@Override
					public void actionPerformed(ActionEvent ae)
					{
						JPanel panelConnect = new JPanel();
						JFrame frameConnect = new JFrame("Login");
						frameConnect.setSize(400,300);
						frameConnect.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
						frameConnect.add(panelConnect);
						
						panelConnect.setLayout(null);
						
						userLabel = new JLabel("User");
						userLabel.setBounds(10, 20, 80, 25);
						panelConnect.add(userLabel);
						
						userText = new JTextField();
						userText.setBounds(100, 20, 165, 25);
						panelConnect.add(userText);
						
						passwordLabel = new JLabel("Password");
						passwordLabel.setBounds(10, 50, 80, 25);
						panelConnect.add(passwordLabel);
						
						passwordText = new JPasswordField();
						passwordText.setBounds(100, 50, 165, 25);
						panelConnect.add(passwordText);
						
						hostLabel = new JLabel("Host");
						hostLabel.setBounds(10, 80, 80, 25);
						panelConnect.add(hostLabel);
						
						
						hostText = new JTextField();
						hostText.setBounds(100, 80, 165, 25);
						panelConnect.add(hostText);
						
						buttonLogin = new JButton("Login");
						buttonLogin.setBounds(100, 110, 80, 25);
						buttonLogin.addActionListener(new ActionListener() {
						@Override
						public void actionPerformed(ActionEvent e) {
							String user = userText.getText();
							String password = passwordText.getText();
							String host = hostText.getText();
							Conectare.username = user;
							Conectare.password = password;
							Conectare.host = host;
						}
						});
						panelConnect.add(buttonLogin);
						
						buttonExit = new JButton("Exit");
						buttonExit.setBounds(100, 210, 80, 25);
						buttonExit.addActionListener(new ActionListener() {
							@Override
							public void actionPerformed(ActionEvent e) {
								frameConnect.dispose();
							}
							});
						
						panelConnect.add(buttonExit);
						
						frameConnect.setLocationRelativeTo(null);
						frameConnect.setVisible(true);

					}
				});
		panelMain.add(buttonConnect);
		
		buttonImage = new JButton("Upload image");
		buttonImage.setBounds(175, 60, 150 ,25);
		buttonImage.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				JPanel panelImage = new JPanel();
				JFrame frameImage = new JFrame("Image operations");
				frameImage.setSize(400,265);
				frameImage.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
				frameImage.add(panelImage);
				
				panelImage.setLayout(null);
				
				buttonFileChooser = new JButton("Select file");
				buttonFileChooser.setBounds(130, 25, 125, 25);
				buttonFileChooser.addActionListener(new ActionListener() {
				@Override
				public void actionPerformed(ActionEvent e) {
					JFileChooser fileChooser = new JFileChooser("src/");
					fileChooser.showOpenDialog(frameImage);
					Conectare.localFile = fileChooser.getSelectedFile().toString();
				}
				});
				panelImage.add(buttonFileChooser);
				
				buttonPreview = new JButton("Preview image");
				buttonPreview.setBounds(130, 75, 125, 25);
				buttonPreview.addActionListener(new ActionListener() {
					@Override
					public void actionPerformed(ActionEvent e) {
						JFrame framePreview = new JFrame("Preview");
						framePreview.setSize(468,351);
						framePreview.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
						
						
						try{
							BufferedImage originalImage = ImageIO.read(new File(Conectare.localFile));
							BufferedImage resizedImage = new BufferedImage(originalImage.getWidth()/4, originalImage.getHeight()/4, BufferedImage.TYPE_INT_RGB);
						    Graphics2D graphics2D = resizedImage.createGraphics();
						    System.out.println(originalImage.getWidth());
						    System.out.println(originalImage.getHeight());
						    if(originalImage.getWidth() > 467 || originalImage.getHeight() > 350) {
						    	graphics2D.drawImage(originalImage, 0, 0, originalImage.getWidth()/4, originalImage.getHeight()/4, null);
							    graphics2D.dispose();
						    

						    JPanel panelPreview = new JPanel();
							framePreview.add(panelPreview);
							JLabel labelPreview = new JLabel(new ImageIcon(resizedImage));
							framePreview.add(labelPreview);
						    }
						    
						    else {
						    	JPanel panelPreview = new JPanel();
						    	framePreview.add(panelPreview);
								JLabel labelPreview = new JLabel(new ImageIcon(originalImage));
								framePreview.add(labelPreview);
						    }
							
						}

						
						catch(IOException ioe) {
							ioe.printStackTrace();
						}
						
						framePreview.setLocationRelativeTo(null);
						framePreview.setVisible(true);
						
					}
				});
				panelImage.add(buttonPreview);
				
				buttonUpload = new JButton("Upload");
				buttonUpload.setBounds(130, 125, 125, 25);
				buttonUpload.addActionListener(new ActionListener( ) {

					@Override
					public void actionPerformed(ActionEvent e) {
						Conectare.UploadFile(Conectare.username, Conectare.password, Conectare.host, 22);
					}
					
				});
				
				panelImage.add(buttonUpload);
				
				buttonExit = new JButton("Exit");
				buttonExit.setBounds(130, 175, 125, 25);
				buttonExit.addActionListener(new ActionListener() {
					@Override
					public void actionPerformed(ActionEvent e) {
						frameImage.dispose();
					}
					});
				
				panelImage.add(buttonExit);
				
				frameImage.setLocationRelativeTo(null);
				frameImage.setVisible(true);

				
		        
			}
		});
		panelMain.add(buttonImage);
		
		buttonReboot = new JButton("Reboot");
		buttonReboot.setBounds(175, 110, 150 ,25);
		
		buttonReboot.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				Conectare.Reboot(Conectare.username, Conectare.password, Conectare.host, 22);
			}
		});
		panelMain.add(buttonReboot);
		
		
		buttonExitMain = new JButton("Exit");
		buttonExitMain.setBounds(175, 210, 150, 25);
		buttonExitMain.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				System.exit(0);
			}
			});
		
		panelMain.add(buttonExitMain);
		
		frameMain.setLocationRelativeTo(null);
		frameMain.setVisible(true);
		
	}
}
