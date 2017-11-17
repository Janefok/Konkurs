import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Controls.Material 2.1
import QtQuick.Controls.Styles 1.4
import QtQuick.Dialogs 1.2
import QtQuick.Layouts 1.3
import QtQml.Models 2.2


ApplicationWindow {
    id: applicationWindow
    visible: true
    width: 320
    height: 480
    Material.theme: Material.Dark
    Material.background: Material.LightGreen
    Loader {
        id: loader
        anchors.fill: parent
        width: parent.width
        source: "ListViewMenu.qml"
    }

    footer: TabButtons{}

//    StackLayout{
//        width: parent.width
//        currentIndex: tabBar.currentIndex
//        anchors.fill: parent



 }

//        Item {
//            id: secondTab
//        }
//        Item {
//            id: thirdTab
//        }
//    }
//}

//    Rectangle{
//        //Material.theme: Material.Dark
//        id: menuBar
//        width: parent.width
//        height: 45
//        //color: "#ffffff"
//        color: "#4d4d4d"
//        anchors.bottom: parent.bottom
//        anchors.left: parent.left
//        anchors.right: parent.right
//        property color mBar: "#44aa44"

//        ListView{
//            id: menuListView

//            anchors.fill: parent
//            anchors.bottom: parent.bottom
//            anchors.right: parent.right
//            width: parent.width
//            height: parent.height

//            model: menuListModel

//            //orientation: ListView.Horizontal

//        }

//        VisualItemModel {
//                id: menuListModel

//                /*ListViewMenu{
//                    width: menuListView.width
//                    height: menuBar.height
//                    anchors.left: parent.left
//                    //color: ""
//                }*/
//    //            Button{
//    //                id: personalityB
//    //                //iconSource: "icons/ic_assignment_ind_white_24dp.png"
//    //                //anchors.fill: parent
//    //                anchors.left: parent.left
//    //                //Layout.minimumWidth: 100
//    //                //Layout.minimumHeight: 100
//    //                height: menuBar.height
//    //                width: menuBar.height
//    //                //
//    ////                Image {
//    ////                    anchors.fill: parent
//    ////                    source: "icons/ic_assignment_ind_white_24dp.png"
//    ////                    fillMode: Image.Tile
//    ////                }
//    //                style: ButtonStyle{
//    //                    background: Rectangle{
//    //                        border.color: Material.color(Material.LightGreen)
//    //                        radius: menuBar.height/2
//    //                    }
//    //                    Material.accent: Material.Grey
//    //                }



//                Button{
//                    id: news
//                    //iconSource: "icons/ic_feedback_white_24dp.png"
//                    //anchors.fill: parent
//                    //anchors.onRightChanged: : parent.right
//                    //Layout.minimumWidth: 100
//                    //Layout.minimumHeight: 100
//                    height: menuBar.height
//                    width: menuBar.height
//    //                Image {
//    //                    anchors.fill: parent
//    //                    source: "icons/ic_feedback_white_24dp.png"
//    //                    fillMode: Image.Tile
//    //                }
//                    Material.accent: Material.Orange

//                }
//                TabBar{

//                }

////            PersonMenu{
////                width: menuListView.width
////                height: menuBar.height
////                anchors.right: parent.right
////            }
//        }
//    }
//}
