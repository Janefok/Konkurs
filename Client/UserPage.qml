import QtQuick 2.7
import QtQuick.Controls 2.1
import anima 1.0

Rectangle{
    anchors.fill: parent
    height: parent.height
    ListView {
        width: 200; height: 250

        model: AnimaModel{
            id: aM
        }

        delegate: Text { text: "Animal: " + type + ", " + size}
    }


}
