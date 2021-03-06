import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.1
import QtQuick.Controls.Material 2.1
import anima 1.0

Item{
    anchors.fill: parent
//    AnimalModel{
//        id: anim
//    }
    ListModel {
       id: dataModel
//       ListElement {
//           //color: "white"
//           caption: "Команда по гребле одержала победу!"
//           info : " ￼￼￼Первая победа ￼￼￼Наша команда провела первую игру сезона! Соперником была сборная ПМГМУ им И.М.Сеченова. В первом тайме в первые 15 минут наши девочки не были разогреты и пропустили 2 гола.После таких обидно пропущенных мячей команда разозлилась и собралась. Наша команда начала атаковать постоянно и первый тайм закончился со счетом 2:2, в втором тайме наша команда с уверенностью играла и победила со счётом 4:3. победа РХТУ!!!!
//Ближайшая игра в следующую среду(15.11.2017 18:15)с командой МОГУ в КСК.

//Спасибо дорогим болельщикам за поддержку! ￼
//Так же поздравляем новичков сборной, желаем уверенности и красивой игры!"

//       }
//       ListElement {
//           caption: "Соревнования по кикбоксингу."
//           info: "20 декабря "

//       }

//       ListElement {
//           caption: "Соревнования по кикбоксингу."
//           info: "Спасибо дорогим болельщикам за поддержку! ￼
//Так же поздравляем новичков сборной, желаем уверенности и красивой игры! "

//       }

//       ListElement {
//           caption: "Соревнования по кикбоксингу."
//           info: "Спасибо дорогим болельщикам за поддержку! ￼
//Так же поздравляем новичков сборной, желаем уверенности и красивой игры! "

//       }

//       ListElement {
//           caption: "Соревнования по кикбоксингу."
//           info: "Спасибо дорогим болельщикам за поддержку! ￼
//Так же поздравляем новичков сборной, желаем уверенности и красивой игры! "

//       }

//       ListElement {
//           //color: "white"
//           caption: "Команда по гребле одержала победу!"
//           info : " ￼￼￼Первая победа ￼￼￼Наша команда провела первую игру сезона! Соперником была сборная ПМГМУ им И.М.Сеченова. В первом тайме в первые 15 минут наши девочки не были разогреты и пропустили 2 гола.После таких обидно пропущенных мячей команда разозлилась и собралась. Наша команда начала атаковать постоянно и первый тайм закончился со счетом 2:2, в втором тайме наша команда с уверенностью играла и победила со счётом 4:3. победа РХТУ!!!!
//Ближайшая игра в следующую среду(15.11.2017 18:15)с командой МОГУ в КСК.

//Спасибо дорогим болельщикам за поддержку! ￼
//Так же поздравляем новичков сборной, желаем уверенности и красивой игры!"

//}

    }

    Column{
       id: columnList
       width: parent.width

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

               delegate: Rectangle {

                   width: view.width
                   height: nm.contentHeight + prN.contentHeight + 40
                   color: 'white'
                   border.color: "#cccccc"
                   clip: true

                       Column{
                           spacing: 5
                           anchors.fill:parent

                           anchors.leftMargin: 10
                           anchors.rightMargin: 10
                           anchors.bottomMargin: 10
                           anchors.topMargin: 10

                           //разбить строку с информацией на два столца: слева картинка, справа текст
                           Row{
                               spacing: 10
                               Image {
                                   width: 20
                                   height: 20
                                   source: "./icons/icons8-О нас-48.png"
                               }

                               Text {
                                   id: nm
                                   renderType: Text.NativeRendering
                                   text: caption
                                   font.pixelSize: 14
                                   color: "#4d1517"
                               }
                           }

                           Text {
                               id: prN
                               renderType: Text.NativeRendering
                               width: view.width - 10
                               text: info
                               wrapMode: Text.WordWrap
                               font.pixelSize: 12
                               color: "#333333"
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
            text: "+"
        }

        onClicked: stackFeedPage.push(loader_feed.source="NewFeedElement.qml")
        //radius: 50
        //background: Rectangle{
        //    radius: 80
         //   color: "lightblue"
        //}
//        style:ButtonStyle{
//            color:"lightblue"
//        }
    }

    StackView{
        id:stackFeedPage
        initialItem: buttonList
        anchors.fill: parent
        focus: true
        Keys.onReleased: if (event.key === Qt.Key_Back && stackView.depth > 1) {
                             stackView.pop(loader_feed.source = "NewFeedElement.qml");
                             event.accepted = true;
                         }
    }

    Loader{
        id:loader_feed
        anchors.fill: parent
    }
}
