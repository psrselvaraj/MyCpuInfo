# MyCpuInfo

QT model and QML implementation for displaying CPU Information


1. Requirement or Task
	Read the Linux CPU information from /proc/cpuinfo and display it using QML.

2. Version Information
	Linux used: Ubuntu 16.04
	Qt version : 5.9.1

3. Steps for Integration and runing the application:
	a. Download the package from Git hub -> Headers(.h files), Sources(C++ files) and
    	Resources(QML files).
	b. Open the project in Qt creater and just Run it.

4. Implementation/Design aspects

a. C++ Model implementation:
	- To read the “/proc/cpuinfo” using the file operation via c++ QAbstractListModel subclass
	- Counts the number of lines available in the file.
	- Split the file into rows as string and also eliminate the empty lines.

b. QML Implementation:
	- Defining a window.
	- Creating a rectangle (with appropriate properties set)
	- Invoked the model to get the string
	- Included a ListView to display the string

Please refer the commnets included in the code which expalins the purpose of code implementation in respective part.

5. Further Enhancement / Possible updates

	Since this project is created in very short time(approximately 4Hrs) and just aimed to represent the implementation of the concept, the graphical UI is very simple. This can be improved/updated in various manner. 

6. Conclusion
	Since I am not expert in QT, this implementation may be simple but I hope it will meet the basic requirement of the task assigned. 


