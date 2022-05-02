import com.jcraft.jsch.*;
import java.io.*;


public class Conectare {
	static String username;
	static String password;
	static String host;
	int port =22;
	static String localFile;
	
	public static void UploadFile(String username, String password, String host, int port)
	 {
		
		String remotePath = "/usr/share/remarkable/";
		Session jschSession = null;
		try {
			JSch jsch = new JSch();
            jschSession = jsch.getSession(username, host, 22);
			jschSession.setPassword(password);
            jschSession.setConfig("StrictHostKeyChecking", "no");
            jschSession.connect();
            
            Channel sftp = jschSession.openChannel("sftp");
            sftp.connect();
            
            ChannelSftp channelSftp = (ChannelSftp) sftp;
            channelSftp.put(localFile, remotePath + "suspended.png");
            channelSftp.exit();
            
		} catch (JSchException | SftpException e) {
			e.printStackTrace();
		} finally {
			if (jschSession != null) {
				jschSession.disconnect();
			}
		}
		System.out.println("Done");
		
	 }
	

	
	public static void Reboot(String username, String password, String host, int port)
	 {
		Session session = null;
		Channel channel = null;
		
		try {
			session = new JSch().getSession(username, host, port);
			session.setPassword(password);
			session.setConfig("StrictHostKeyChecking" , "no");
			System.out.println("Establishing Connection...");
			session.connect();
	        System.out.println("Connection established.");
	        System.out.println("Crating SFTP Channel.");
			
			channel =  session.openChannel("exec");
			((ChannelExec) channel).setCommand("reboot");	
			ByteArrayOutputStream responseStream = new ByteArrayOutputStream();			
		     channel.setOutputStream(responseStream);
	        channel.connect();
	        String responseString = new String(responseStream.toByteArray());
	        System.out.println(responseString);
	        
	        while (channel.isConnected()) {
	        	Thread.sleep(100);
	        }
	        System.out.println("Executed.");

		} 
		catch (JSchException | InterruptedException e) {
           e.printStackTrace();
		}
			finally {
			if (session != null) {
				session.disconnect();
			}
			if (channel != null) {
				channel.disconnect();
			}
		}
	}
}


/*public static void Reboot(String username, String password, String host, int port)
{
	Session session = null;
	ChannelExec channel = null;
	
	try {
		session = new JSch().getSession(username, host, port);
		session.setPassword(password);
		session.setConfig("StrictHostKeyChecking" , "no");
       System.out.println("Establishing Connection...");
		session.connect();
       System.out.println("Connection established.");
       System.out.println("Crating SFTP Channel.");
		
		channel = (ChannelExec) session.openChannel("exec");
		channel.setCommand("ls home/pi");
       ByteArrayOutputStream responseStream = new ByteArrayOutputStream();			
       channel.setOutputStream(responseStream);
       channel.connect();
       
       while (channel.isConnected()) {
       	Thread.sleep(100);
       }
       
       String responseString = new String(responseStream.toByteArray());
       System.out.println(responseString);
	}
		catch (JSchException | InterruptedException e) {
			e.printStackTrace();
		}
		finally {
		if (session != null) {
			session.disconnect();
		}
		if (channel != null) {
			channel.disconnect();
		}
	}
}*/


/*Session session = null;
ChannelSftp channel = null;
System.out.println(username);
System.out.println(host);
System.out.println(localFile);

try {
//	JSch jsch = new JSch();
	session = new JSch().getSession(username, host, port);
	session.setPassword(password);
	session.setConfig("StrictHostKeyChecking" , "no");
	System.out.println("Establishing Connection...");
	session.connect();
    System.out.println("Connection established.");
    System.out.println("Crating SFTP Channel.");
	
	channel = (ChannelSftp) session.openChannel("Sftp");
	//channel.setCommand("ls /home/pi");
//	ByteArrayOutputStream responseStream = new ByteArrayOutputStream();			
   // channel.setOutputStream(responseStream);
    channel.connect();
    localFile = "src/cat.jpg";
    String remoteDir = "/home/pi";
    channel.put(localFile, remoteDir + "test.jpg");
    
    while (channel.isConnected()) {
    	Thread.sleep(100);
    }
    System.out.println("Executed.");
  //  String responseString = new String(responseStream.toByteArray());
   // System.out.println(responseString);

} 
catch (JSchException | InterruptedException | SftpException e) {
   e.printStackTrace();
}
	finally {
	if (session != null) {
		session.disconnect();
	}
	if (channel != null) {
		channel.disconnect();
	}
}*/
