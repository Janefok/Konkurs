import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Controls.Styles 1.4

    Rectangle {
        id: rect
        color: "#f5f5f5"
        anchors.fill: parent

        Button {
            id: button
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
                loader.source = "ListUsersPage.qml"
            }
        }

        Column{
            anchors.fill: parent
            anchors.margins: 40
            spacing: 10

            Column{
                spacing: 2

                Row {
                    Image {
                        anchors.bottomMargin: view.height/2
                        anchors.rightMargin: view.width/2 - 10
                        width: 50
                        height: 50
                        source: "icons/icons8-Пользователь-мужчина в кружке-48.png"
                    }

                    Text {
                        anchors.verticalCenter: parent.verticalCenter
                        text: " Информация о студенте"
                        color: "#333333"
                        font.pixelSize: 18
                    }
                }

                Row {
                    Rectangle {
                        id: rectangle
                        width: 250
                        height: 25
                        color: "white"
                        visible: true

                        Row {
                            width: 250
                            height: 25

                            Image {
                                anchors.bottomMargin: view.height/2
                                width: 20
                                height: 20
                                source: "icons/icons8-Отмеченный чекбокс 2-48.png"
                            }

                            Text {
                                text: " Фамилия: "
                                color: "#666666"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent/3
                                //verticalAlignment: Text.AlignVCenter
                                //horizontalAlignment: Text.AlignHCenter
                                font.pixelSize: 12
                            }

                            Text {
                                id: text_sername
                                text: "Фокина"
                                color: "#333333"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent
                                verticalAlignment: Text.AlignVCenter
                                horizontalAlignment: Text.AlignRight
                                font.pixelSize: 14
                            }
                         }
                    }
                }

                Row {
                    Rectangle {
                        id: rectangle2
                        width: 250
                        height: 25
                        color: "white"
                        visible: true

                        Row {
                            width: 250
                            height: 25

                            Image {
                                anchors.bottomMargin: view.height/2
                                width: 20
                                height: 20
                                source: "icons/icons8-Отмеченный чекбокс 2-48.png"
                            }

                            Text {
                                text: " Имя: "
                                color: "#666666"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent/3
                                font.pixelSize: 12
                            }

                            Text {
                                id: text_name
                                text: "Евгения"
                                horizontalAlignment: Text.AlignRight
                                color: "#333333"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent
                                font.pixelSize: 14
                            }
                        }
                    }
                }

                Row {
                    Rectangle {
                        id: rectangle3
                        width: 250
                        height: 25
                        color: "white"
                        visible: true

                        Row{
                            width: 250
                            height: 25

                            Image {
                                anchors.bottomMargin: view.height/2
                                width: 20
                                height: 20
                                source: "icons/icons8-Отмеченный чекбокс 2-48.png"
                            }

                            Text {
                                text: " Отчество: "
                                color: "#666666"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent/3
                                font.pixelSize: 12
                            }


                            Text {
                                id: text_patronymic
                                text: "Aлексеевн"
                                color: "#333333"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent
                                font.pixelSize: 14
                            }
                        }
                    }
                }
            }

            Column{
                spacing: 2

                Row {
                    Rectangle {
                        id: rectangle111
                        width: 250
                        height: 25
                        color: "white"
                        visible: true

                        Row {
                            width: 250
                            height: 25

                            Image {
                                anchors.bottomMargin: view.height/2
                                width: 20
                                height: 20
                                source: "icons/icons8-Отмеченный чекбокс 2-48.png"
                            }

                            Text {
                                text: " Факультет: "
                                color: "#666666"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent/3
                                //verticalAlignment: Text.AlignVCenter
                                //horizontalAlignment: Text.AlignHCenter
                                font.pixelSize: 12
                            }

                            Text {
                                id: text_fac
                                text: "ИТУ"
                                color: "#333333"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent
                                verticalAlignment: Text.AlignVCenter
                                horizontalAlignment: Text.AlignRight
                                font.pixelSize: 14
                            }
                         }
                    }
                }

                Row {
                    Rectangle {
                        id: rectangle23
                        width: 250
                        height: 25
                        color: "white"
                        visible: true

                        Row {
                            width: 250
                            height: 25

                            Image {
                                anchors.bottomMargin: view.height/2
                                width: 20
                                height: 20
                                source: "icons/icons8-Отмеченный чекбокс 2-48.png"
                            }

                            Text {
                                text: " Группа: "
                                color: "#666666"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent/3
                                font.pixelSize: 12
                            }

                            Text {
                                id: text_group
                                text: "МК-10"
                                horizontalAlignment: Text.AlignRight
                                color: "#333333"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent
                                font.pixelSize: 14
                            }
                        }
                    }
                }
            }

            Column{
                spacing: 2

                Row {
                    Rectangle {
                        id: rectangle21
                        width: 250
                        height: 25
                        color: "white"
                        visible: true

                        Row {
                            width: 250
                            height: 25

                            Image {
                                anchors.bottomMargin: view.height/2
                                width: 20
                                height: 20
                                source: "icons/icons8-Отмеченный чекбокс 2-48.png"
                            }

                            Text {
                                text: " E-mail: "
                                color: "#666666"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent/3
                                font.pixelSize: 12
                            }

                            Text {
                                id: text_mail
                                text: "Евгения"
                                horizontalAlignment: Text.AlignRight
                                color: "#333333"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent
                                font.pixelSize: 14
                            }
                        }
                    }
                }

                Row {
                    Rectangle {
                        width: 250
                        height: 25
                        color: "white"
                        visible: true

                        Row{
                            width: 250
                            height: 25

                            Image {
                                anchors.bottomMargin: view.height/2
                                width: 20
                                height: 20
                                source: "icons/icons8-Отмеченный чекбокс 2-48.png"
                            }

                            Text {
                                text: " Номер: "
                                color: "#666666"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent/3
                                font.pixelSize: 12
                            }


                            Text {
                                id: text_number
                                text: "89163938236"
                                color: "#333333"
                                anchors.verticalCenter: parent.verticalCenter
                                width: parent
                                font.pixelSize: 14
                            }
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
}
