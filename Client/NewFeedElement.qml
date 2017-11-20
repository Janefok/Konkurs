import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Controls.Styles 1.4

    Rectangle {
        id: rect
        color: "#f5f5f5"
        anchors.fill: parent

        Button {
            id: button_feed
            x: 8
            y: 8
            width: 40
            height: 30
            text: qsTr("<")
            z: 2
            transformOrigin: Item.Center
            enabled: true
            clip: false
            opacity: 1
            visible: true
            checkable: false
            highlighted: false
            onClicked: {
                loader_feed.source = "ListFeedPage.qml"
            }
        }

        Column{
            anchors.fill: parent
            anchors.margins: 40
            spacing: 10

            Column{
                spacing: 10

                Row {
                    Image {
                        anchors.bottomMargin: view.height/2
                        anchors.rightMargin: view.width/2 - 10
                        width: 40
                        height: 40
                        source: "icons/icons8-О нас-48.png"
                    }

                    Text {
                        anchors.verticalCenter: parent.verticalCenter
                        text: " Что нового?"
                        color: "#333333"
                        font.pixelSize: 18
                    }
                }

                Row {
                    Rectangle {
                        id: rectangle
                        width: 250
                        height: text_caption.contentHeight + 40
                        color: "white"
                        visible: true

                        Row {
                            width: 250
                            height: text_caption.contentHeight + 40

                            Image {
                                anchors.bottomMargin: view.height/2
                                width: 20
                                height: 20
                                source: "icons/icons8-О нас-48 (2).png"
                            }

                            Text {
                                text: " Заголовок: "
                                color: "#666666"
                                width: parent/3
                                font.pixelSize: 12
                            }

                            TextInput {
                                id: text_caption
                                text: "Наша победа"
                                color: "#333333"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent.width - 10
                                verticalAlignment: Text.AlignVCenter
                                horizontalAlignment: Text.AlignRight
                                renderType: Text.NativeRendering
                                font.pixelSize: 14
                                wrapMode: Text.WordWrap
                            }
                         }
                    }
                }

                Row {
                    Rectangle {
                        id: rectangle2
                        width: 250
                        height: text_info.contentHeight + 40
                        color: "white"
                        visible: true

                        Row {
                            width: 250
                            height: text_info.contentHeight + 40

                            Image {
                                anchors.bottomMargin: view.height/2
                                width: 20
                                height: 20
                                source: "icons/icons8-О нас-48 (2).png"
                            }

                            Text {
                                text: " Описание: "
                                color: "#666666"
                                width: parent/3
                                font.pixelSize: 12
                            }

                            TextInput {
                                id: text_info
                                text: "Евгения"
                                horizontalAlignment: Text.AlignRight
                                color: "#333333"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent
                                font.pixelSize: 14
                                renderType: Text.NativeRendering
                                wrapMode: Text.WordWrap
                            }
                        }
                    }
                }

                Row {
                   Button {
                       text: "Добавить запись"
                   }
                }
            }

        } //end Column

    }


        //    Text{
    //        Column{
    //            Row{
    //                Text{
    //                    text: " Фамилия"
    //                }
    //                TextField{
    //                    name: ""
    //                }
    //            }
    //        }
    //    }

//        NumberAnimation on opacity {
//         to: 0; duration: 900

//    //        onRunningChanged: {
//    //            if (!running) {
//    ////                console.log("Destroying...")
//    //////                rect.destroy();
//    //                //rect.visible : true
//    //            }
//    //        }
//        }
