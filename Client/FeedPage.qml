import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.1

Item{
    ListModel {
       id: dataModel
       ListElement {
           //color: "white"
           name: "Alexeev"
           //preName: "Dmitrij"
           //lastName:"Seergeevich"
           facultet: "IKT"
           sport: "Tennis"
       }
       ListElement {
           name: "Fokina"
           //preName: "Evgenia"
           //lastName:"Alexeevna"
           facultet: "IKT"
           sport: "Tennis"
           color: "white"
       }

    }

    Column{
       id: columnList
       width: parent.width
       //Toolbar = верхняя панелька с заголовоком страницы
       Rectangle{
           width: parent.width
           height: 40
           color: "#4d4d4d"
           Text {
               text: "Новости"
               anchors.centerIn: parent
               color: "white"
               font.pixelSize : 18
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
               spacing: 10
               model: dataModel

               delegate: Rectangle {
                   width: view.width
                   height: 80
                   color: 'white'
                   radius: 10
                   Row{
                       anchors.fill:parent
                       spacing: 20
                       anchors.leftMargin: 10
                       Column{
                           spacing: 5
                           Text {
                               id: nm
                               //anchors.centerIn: parent
                               renderType: Text.NativeRendering
                               //text: name + "   " + facultet + "    " + sport
                               text:name
                               font.pixelSize: 14

                           }
                           Text {
                               id: prN
                               //anchors.centerIn: parent
                               renderType: Text.NativeRendering
                               //text: name + "   " + facultet + "    " + sport
                               text:preName
                               font.pixelSize: 11

                           }
                           Text {
                               id: lN
                               //anchors.centerIn: parent
                               renderType: Text.NativeRendering
                               //text: name + "   " + facultet + "    " + sport
                               text:lastName
                               font.pixelSize: 11

                           }
                       }
                       Text {
                           id: fac
                           //anchors.left: nm.right

                           font.pixelSize: 14

                           text: facultet
                       }
                       Text {
                           id: st
                           //width: :
                           //anchors.left: fac.right
                           text: sport
                           font.pixelSize: 14

                       }

                   }
                }
            }
        }
    }
}
