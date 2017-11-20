import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.1
import QtQuick.Controls.Material 2.1

Item{
    anchors.fill: parent

    ListModel {
          id: proxyModel
        }

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
           sport: "Kerling"
           color: "white"
       }
       ListElement {
           name: "Fokina"
           facultet: "IKT"
           sport: "Volleyball"
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
//           Loader{
//               id:search
//               width: columnList.width
//               anchors.fill: parent
//               source: "SearchData.qml"
//           }
           SearchData{
               //TextField{id:searchBar}
               id: searchBar
                   anchors.fill: parent
               onSearchTextChanged:  {
                       proxyModel.clear();
                       for (var i=0;i!=dataModel.count;i++) {
                         var item = dataModel.get(i);
                         if (item.name.search(searchText) != -1) {
                           proxyModel.append({"name": item.name, "facultet": item.facultet, "sport": item.sport});
                         }
                         if (item.sport.search(searchText) != -1) {
                           proxyModel.append({"sport": item.sport, "facultet": item.facultet, "name": item.name});
                         }
                       }
                       view.model = proxyModel;
                     }
               //onCanceled:{ view.model = dataModel}
                //}
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
                               color: "#333333"
                               font.pixelSize: 14

                           }

                           Text {
                               id: fact
                               anchors.verticalCenter: parent.verticalCenter
                               font.pixelSize: 14
                               width: parent/3
                               text: facultet
                               color: "#333333"
                           }

                           Text {
                               id: st
                               // Выравнивание элемента по центру
                               anchors.verticalCenter: parent.verticalCenter
                               text: sport
                               font.pixelSize: 14
                               width: parent/3
                               color: "#333333"
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

//               Component {
//                     id: highlight
//                     Rectangle {
//                       width: view.currentItem.width
//                       height: view.currentItem.height
//                       color: "white"; radius: 5; opacity: 0.3
//                       y: SpringFollow {
//                         source: view.currentItem.y
//                         spring: 3
//                         damping: 0.2
//                       }
//                     }
//                   }

           }   //end of ListView
        }   //end of Rectangle
    }   //end of Column (with ToolBar & ListUsersPage)

    RoundButton{
        id:addPersons
        //anchors.fill: parent
        anchors.bottom: parent.bottom
        anchors.right: parent.right
        anchors.bottomMargin: 10
        anchors.rightMargin: view.width/2 - 10
        anchors.horizontalCenter: parent.footer

        onClicked: stackNewUsersPage.push(loader_new_user.source="NewUser.qml")

        Text {
            id: plus
            font.pixelSize: 40
            anchors.centerIn: parent
            text: "+"
        }
        radius: 30

    }

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

    StackView{
        id:stackNewUsersPage
        initialItem: buttonList
        anchors.fill: parent
        focus: true
        Keys.onReleased: if (event.key === Qt.Key_Back && stackView.depth > 1) {
                             stackView.pop(loader_new_user.source = "NewUser.qml");
                             event.accepted = true;
                         }
    }

    Loader{
        id:loader_new_user
        anchors.fill: parent
    }

}
