import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.1



Column{
   id: columnList
   spacing: 10
   //color: "#4d4d4d"
   //anchors.fill: parent
//   anchors.left: parent.left
//   anchors.right: parent.right
//   Column{
//       anchors.margins: 10
//       //anchors.fill: parent
//       spacing: 10
   Rectangle{
       Loader{
            id:search
            width: windowList.width
            height: 40
            //anchors.fill: on
            //anchors.fill: parent

            source: "SearchData.qml"
        }
    }
   Rectangle{
        ListModel {
               id: dataModel

               ListElement {
                   color: "white"
                   //text: "first"
                   name: "Alexeev"
                   facultet: "IKT"
                   sport: "Tennis"
               }
               ListElement {
                   name: "Fokina"
                   facultet: "IKT"
                   sport: "Tennis"
                   color: "white"
               }
           }

           ListView {
               id: view
               width: parent.width
               anchors.margins: 10
               anchors.fill: parent
//               anchors.top: search.bottom
//               anchors.left: parent.left - 10
//               anchors.right: parent.right - 10
               spacing: 10
               model: dataModel

               delegate: Rectangle {
                   width: view.width
                   height: 80
                   anchors.horizontalCenter: parent.horizontalCenter
                   color: 'white'
                   radius: 10
                   border.color: "#4d4d4d"

                   Text {
                       anchors.centerIn: parent
                       renderType: Text.NativeRendering
                       text: name + "   " + facultet + "    " + sport
                       font.pixelSize: 14

                   }

                }
            }
        }
        //}
}
