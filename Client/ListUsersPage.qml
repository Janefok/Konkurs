import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.1
import QtQuick.Controls.Material 2.1

Item{
    anchors.fill: parent
    ListModel {
       id: dataModel
       ListElement {
           color: "white"
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
       ListElement {
           name: "Fokina"
           facultet: "IKT"
           sport: "Tennis"
           color: "white"
       }
       ListElement {
           name: "Fokina"
           facultet: "IKT"
           sport: "Tennis"
           color: "white"
       }
       ListElement {
           name: "Fokina"
           facultet: "IKT"
           sport: "Tennis"
           color: "white"
       }
       ListElement {
           name: "Fokina"
           facultet: "IKT"
           sport: "Tennis"
           color: "white"
       }
       ListElement {
           name: "Fokina"
           facultet: "IKT"
           sport: "Tennis"
           color: "white"
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

       //List - как я поняла это область где рендерится весь список
        Rectangle{
           color: "#e6e6e6"
           width: parent.width
           height: 400
           ListView {
               id: view
               width: parent.width
               anchors.fill: parent
               spacing: 2
               model: dataModel

               delegate: Button{
                   id:buttonList
                   width: view.width
                   height: 40

                   background: Rectangle {
                   color: 'white'
                   border.color: "#cccccc"
                   anchors.fill:parent

                       Row{
                           spacing: 20
                           // Отступ сверху, 10 пикселей
                           anchors.fill: parent;
                           anchors.leftMargin: 5;
                           anchors.topMargin: 2;

                           Image {
                               width: 35
                               height: 35
                               source: "./icons/icons8-Пользователь-мужчина в кружке-48.png"
                           }

                           Text {
                               id: nm
                               //anchors.centerIn: parent
                               renderType: Text.NativeRendering
                               //text: name + "   " + facultet + "    " + sport
                               anchors.verticalCenter: parent.verticalCenter
                               width: parent/3
                               text:name
                               font.pixelSize: 14

                           }

                           Text {
                               id: fact
                               anchors.verticalCenter: parent.verticalCenter
                               font.pixelSize: 14
                               width: parent/3
                               text: facultet
                           }

                           Text {
                               id: st
                               // Выравнивание элемента по центру
                               anchors.verticalCenter: parent.verticalCenter
                               text: sport
                               font.pixelSize: 14
                               width: parent/3
                           }

                        }//end of Row
//                   MouseArea{
//                       anchors.fill: parent
//                       onClicked: {
//                           parent.color = "red"
//                           stackPersonView.push(Qt.resolvedUrl("./icons/ic_equalizer_white_24dp.png"))
//                       }
//                   }
                    }
                   onClicked: stackUsersPage.push(loader.source="UserPage.qml")
                }   //end of delegate:
            }   //end of ListView
        }   //end of Rectangle
    }   //end of Column (with ToolBar & ListUsersPage)
    CenterButton{}
    StackView{
        id:stackUsersPage
        initialItem: buttonList
        anchors.fill: parent
        focus: true
        Keys.onReleased: if (event.key === Qt.Key_Back && stackView.depth > 1) {
                             stackView.pop(loader.source = "UserPage.qml");
                             event.accepted = true;
                         }
    }
    Loader{
        id:loader
        anchors.fill: parent
    }

}