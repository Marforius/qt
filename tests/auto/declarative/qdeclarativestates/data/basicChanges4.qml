import Qt.test 1.0
import Qt 4.6

MyRectangle {
    id: rect
    width: 100; height: 100
    color: "red"

    states: State {
        name: "aBlueDay"
        PropertyChanges {
            target: rect
            onPropertyWithNotifyChanged: { rect.color = "blue"; }
        }
    }

    Component.onCompleted: rect.state = "aBlueDay"
}
