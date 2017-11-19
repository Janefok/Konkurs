import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.1
import QtQuick.Controls.Material 2.1

Item{
    ListModel {
       id: dataModel
       ListElement {
           color: "white"
           //text: "first"
           name: "Alexeev"          
           sport: "Tennis"
           command: "Звери"

       }
       ListElement {
           name: "Fokina, Fokina, Fokina, Fokina, Fokina, Fokina, Fokina"
           sport: "Tennis"
           color: "white"
           command: "drh"
       }

    }

    Column{
       id: columnList
       width: parent.width
       //Toolbar
       Rectangle{
           width: parent.width
           height: 40
           Loader{
               id:search
               width: columnList.width
               anchors.fill: parent
               source: "SearchData.qml"
           }
       }
       //List
       Rectangle{
           color: "#e6e6e6"
           width: parent.width
           height: 400
           ListView {
               id: view
               width: parent.width
               anchors.fill: parent
               spacing: 3
               model: dataModel

               delegate: Rectangle {
                   width: view.width
                   height: 60
                   color: 'white'
                   border.color: "#cccccc"

                   Column {

                       spacing: 10
                       anchors.fill: parent
                       anchors.margins: 10

                       Row {
                           spacing: 40

                           Image {
                               width: 20
                               height: 20
                               source: "./icons/icons8-Группа пользователей, мужчины-48.png"
                           }

                           Text {
                               id: cm
                               //width: :
                               //anchors.left: fac.right
                               text: "'" + command + "'"
                               font.pixelSize: 16

                           }

                           Text {
                               //width: :
                               //anchors.left: fac.right
                               text: " "
                               font.pixelSize: 16

                           }

                        Text {
                            id: st
                            //width: :
                            //anchors.rightMargin: view.right
                            text: sport
                            font.pixelSize: 12

                        }

                      }

                       Row{

                           Text {
                               id: nm
                               //anchors.left: nm.right
                               font.pixelSize: 12
                               text: name
                           }
                       }
                    }
               }
            }
        }
    }

    RoundButton {
        id:addTeam
        anchors.bottom: parent.bottom
        anchors.right: parent.right
        anchors.bottomMargin: 10
        anchors.rightMargin: view.width/2 - 10
        anchors.horizontalCenter: parent.footer
        Text {
            id: plus
            font.pixelSize: 40
            anchors.centerIn: parent
            color: "white"
            text: "+"
        }
        radius: 30
//        background: Rectangle{
//            //radius:10
//            color: "lightblue"
//        }
//        style:ButtonStyle{
//            color:"lightblue"
//        }
    }
}
