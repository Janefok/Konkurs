import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Controls.Styles 1.4
//import com.ics.demo 1.0
import UData 1.0


Rectangle{
    anchors.fill: parent
    height: parent.height
    ListView {
        width: parent.width; height: parent.height
        model: ud
        //model: UserDataModel
        delegate: Text { text: "Last Name: " + name  }
    }
    UserData{
        id: ud
        name:"dkkddkdkdkdkdkddkdkdkdclkdfl,cv"
    }

    Button{

        onClicked: UserData.qdeb()
    }
}
