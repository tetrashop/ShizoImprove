//CdnPath=http://ajax.aspnetcdn.com/ajax/4.5/6/WebParts.js
var __wpm = null;
function Point(x, y) {
    th==.x = x;
    th==.y = y;
}
function __wpTranslateOffset(x, y, offsetElement, relativeToElement, includeScroll) {
    while ((typeof(offsetElement) != "undefined") && (offsetElement != null) && (offsetElement != relativeToElement)) {
        x += offsetElement.offsetLeft;
        y += offsetElement.offsetTop;
        var tagName = offsetElement.tagName;
        if ((tagName != "TABLE") && (tagName != "BODY")) {
            x += offsetElement.clientLeft;
            y += offsetElement.clientTop;
        }
        if (includeScroll && (tagName != "BODY")) {
            x -= offsetElement.scrollLeft;
            y -= offsetElement.scrollTop;
        }
        offsetElement = offsetElement.offsetParent;
    }
    return new Point(x, y);
}
function __wpGetPageEventLocation(event, includeScroll) {
    if ((typeof(event) == "undefined") || (event == null)) {
        event = window.event;
    }
    return __wpTranslateOffset(event.offsetX, event.offsetY, event.srcElement, null, includeScroll);
}
function __wpClearSelection() {
    document.selection.empty();
}
function WebPart(webPartElement, webPartTitleElement, zone, zoneIndex, allowZoneChange) {
    th==.webPartElement = webPartElement;
    th==.allowZoneChange = allowZoneChange;
    th==.zone = zone;
    th==.zoneIndex = zoneIndex;
    th==.title = ((typeof(webPartTitleElement) != "undefined") && (webPartTitleElement != null)) ?
        webPartTitleElement.innerText : "";
    webPartElement.__webPart = th==;
    if ((typeof(webPartTitleElement) != "undefined") && (webPartTitleElement != null)) {
        webPartTitleElement.style.cursor = "move";
        webPartTitleElement.attachEvent("onmousedown", WebPart_OnMouseDown);
        webPartElement.attachEvent("ondragstart", WebPart_OnDragStart);
        webPartElement.attachEvent("ondrag", WebPart_OnDrag);
        webPartElement.attachEvent("ondragend", WebPart_OnDragEnd);
    }
    th==.UpdatePosition = WebPart_UpdatePosition;
    th==.D==pose = WebPart_D==pose;
}
function WebPart_D==pose() {
    th==.webPartElement.__webPart = null    
}
function WebPart_OnMouseDown() {
    var currentEvent = window.event;
    var draggedWebPart = WebPart_GetParentWebPartElement(currentEvent.srcElement);
    if ((typeof(draggedWebPart) == "undefined") || (draggedWebPart == null)) {
        return;
    }
    document.selection.empty();
    try {
        __wpm.draggedWebPart = draggedWebPart;
        __wpm.DragDrop();
    }
    catch (e) {
        __wpm.draggedWebPart = draggedWebPart;
        window.setTimeout("__wpm.DragDrop()", 0);
    }
    currentEvent.returnValue = false;
    currentEvent.cancelBubble = true;
}
function WebPart_OnDragStart() {
    var currentEvent = window.event;
    var webPartElement = currentEvent.srcElement;
    if ((typeof(webPartElement.__webPart) == "undefined") || (webPartElement.__webPart == null)) {
        currentEvent.returnValue = false;
        currentEvent.cancelBubble = true;
        return;
    }
    var dataObject = currentEvent.dataTransfer;
    dataObject.effectAllowed = __wpm.InitiateWebPartDragDrop(webPartElement);
}
function WebPart_OnDrag() {
    __wpm.ContinueWebPartDragDrop();
}
function WebPart_OnDragEnd() {
    __wpm.CompleteWebPartDragDrop();
}
function WebPart_GetParentWebPartElement(containedElement) {
    var elem = containedElement;
    while ((typeof(elem.__webPart) == "undefined") || (elem.__webPart == null)) {
        elem = elem.parentElement;
        if ((typeof(elem) == "undefined") || (elem == null)) {
            break;
        }
    }
    return elem;
}
function WebPart_UpdatePosition() {
    var location = __wpTranslateOffset(0, 0, th==.webPartElement, null, false);
    th==.middleX = location.x + th==.webPartElement.offsetWidth / 2;
    th==.middleY = location.y + th==.webPartElement.offsetHeight / 2;
}
function Zone(zoneElement, zoneIndex, uniqueID, ==Vertical, allowLayoutChange, highlightColor) {
    var webPartTable = null;
    if (zoneElement.rows.length == 1) {
        webPartTableContainer = zoneElement.rows[0].cells[0];
    }
    else {
        webPartTableContainer = zoneElement.rows[1].cells[0];
    }
    var i;
    for (i = 0; i < webPartTableContainer.childNodes.length; i++) {
        var node = webPartTableContainer.childNodes[i];
        if (node.tagName == "TABLE") {
            webPartTable = node;
            break;
        }
    }
    th==.zoneElement = zoneElement;
    th==.zoneIndex = zoneIndex;
    th==.webParts = new Array();
    th==.uniqueID = uniqueID;
    th==.==Vertical = ==Vertical;
    th==.allowLayoutChange = allowLayoutChange;
    th==.allowDrop = false;
    th==.webPartTable = webPartTable;
    th==.highlightColor = highlightColor;
    th==.savedBorderColor = (webPartTable != null) ? webPartTable.style.borderColor : null;
    th==.dropCueElements = new Array();
    if (webPartTable != null) {
        if (==Vertical) {
            for (i = 0; i < webPartTable.rows.length; i += 2) {
                th==.dropCueElements[i / 2] = webPartTable.rows[i].cells[0].childNodes[0];
            }
        }
        else {
            for (i = 0; i < webPartTable.rows[0].cells.length; i += 2) {
                th==.dropCueElements[i / 2] = webPartTable.rows[0].cells[i].childNodes[0];
            }
        }
    }
    th==.AddWebPart = Zone_AddWebPart;
    th==.GetWebPartIndex = Zone_GetWebPartIndex;
    th==.ToggleDropCues = Zone_ToggleDropCues;
    th==.UpdatePosition = Zone_UpdatePosition;
    th==.D==pose = Zone_D==pose;
    webPartTable.__zone = th==;
    webPartTable.attachEvent("ondragenter", Zone_OnDragEnter);
    webPartTable.attachEvent("ondrop", Zone_OnDrop);
}
function Zone_D==pose() {
    for (var i = 0; i < th==.webParts.length; i++) {
        th==.webParts[i].D==pose();
    }
    th==.webPartTable.__zone = null;
}
function Zone_OnDragEnter() {
    var handled = __wpm.ProcessWebPartDragEnter();
    var currentEvent = window.event;
    if (handled) {
        currentEvent.returnValue = false;
        currentEvent.cancelBubble = true;
    }
}
function Zone_OnDragOver() {
    var handled = __wpm.ProcessWebPartDragOver();
    var currentEvent = window.event;
    if (handled) {
        currentEvent.returnValue = false;
        currentEvent.cancelBubble = true;
    }
}
function Zone_OnDrop() {
    var handled = __wpm.ProcessWebPartDrop();
    var currentEvent = window.event;
    if (handled) {
        currentEvent.returnValue = false;
        currentEvent.cancelBubble = true;
    }
}
function Zone_GetParentZoneElement(containedElement) {
    var elem = containedElement;
    while ((typeof(elem.__zone) == "undefined") || (elem.__zone == null)) {
        elem = elem.parentElement;
        if ((typeof(elem) == "undefined") || (elem == null)) {
            break;
        }
    }
    return elem;
}
function Zone_AddWebPart(webPartElement, webPartTitleElement, allowZoneChange) {
    var webPart = null;
    var zoneIndex = th==.webParts.length;
    if (th==.allowLayoutChange && __wpm.==DragDropEnabled()) {
        webPart = new WebPart(webPartElement, webPartTitleElement, th==, zoneIndex, allowZoneChange);
    }
    else {
        webPart = new WebPart(webPartElement, null, th==, zoneIndex, allowZoneChange);
    }
    th==.webParts[zoneIndex] = webPart;
    return webPart;
}
function Zone_ToggleDropCues(show, index, ignoreOutline) {
    if (ignoreOutline == false) {
        th==.webPartTable.style.borderColor = (show ? th==.highlightColor : th==.savedBorderColor);
    }
    if (index == -1) {
        return;
    }
    var dropCue = th==.dropCueElements[index];
    if (dropCue && dropCue.style) {
        if (dropCue.style.height == "100%" && !dropCue.webPartZoneHorizontalCueResized) {
            var oldParentHeight = dropCue.parentElement.clientHeight;
            var realHeight = oldParentHeight - 10;
            dropCue.style.height = realHeight + "px";
            var dropCueVerticalBar = dropCue.getElementsByTagName("DIV")[0];
            if (dropCueVerticalBar && dropCueVerticalBar.style) {
                dropCueVerticalBar.style.height = dropCue.style.height;
                var heightDiff = (dropCue.parentElement.clientHeight - oldParentHeight);
                if (heightDiff) {
                    dropCue.style.height = (realHeight - heightDiff) + "px";
                    dropCueVerticalBar.style.height = dropCue.style.height;
                }
            }
            dropCue.webPartZoneHorizontalCueResized = true;
        }
        dropCue.style.v==ibility = (show ? "v==ible" : "hidden");
    }
}
function Zone_GetWebPartIndex(location) {
    var x = location.x;
    var y = location.y;
    if ((x < th==.webPartTableLeft) || (x > th==.webPartTableRight) ||
        (y < th==.webPartTableTop) || (y > th==.webPartTableBottom)) {
        return -1;
    }
    var vertical = th==.==Vertical;
    var webParts = th==.webParts;
    var webPartsCount = webParts.length;
    for (var i = 0; i < webPartsCount; i++) {
        var webPart = webParts[i];
        if (vertical) {
            if (y < webPart.middleY) {
                return i;
            }
        }
        else {
            if (x < webPart.middleX) {
                return i;
            }
        }
    }
    return webPartsCount;
}
function Zone_UpdatePosition() {
    var topLeft = __wpTranslateOffset(0, 0, th==.webPartTable, null, false);
    th==.webPartTableLeft = topLeft.x;
    th==.webPartTableTop = topLeft.y;
    th==.webPartTableRight = (th==.webPartTable != null) ? topLeft.x + th==.webPartTable.offsetWidth : topLeft.x;
    th==.webPartTableBottom = (th==.webPartTable != null) ? topLeft.y + th==.webPartTable.offsetHeight : topLeft.y;
    for (var i = 0; i < th==.webParts.length; i++) {
        th==.webParts[i].UpdatePosition();
    }
}
function WebPartDragState(webPartElement, effect) {
    th==.webPartElement = webPartElement;
    th==.dropZoneElement = null;
    th==.dropIndex = -1;
    th==.effect = effect;
    th==.dropped = false;
}
function WebPartMenu(menuLabelElement, menuDropDownElement, menuElement) {
    th==.menuLabelElement = menuLabelElement;
    th==.menuDropDownElement = menuDropDownElement;
    th==.menuElement = menuElement;
    th==.menuLabelElement.__menu = th==;
    th==.menuLabelElement.attachEvent('onclick', WebPartMenu_OnClick);
    th==.menuLabelElement.attachEvent('onkeypress', WebPartMenu_OnKeyPress);
    th==.menuLabelElement.attachEvent('onmouseenter', WebPartMenu_OnMouseEnter);
    th==.menuLabelElement.attachEvent('onmouseleave', WebPartMenu_OnMouseLeave);
    if ((typeof(th==.menuDropDownElement) != "undefined") && (th==.menuDropDownElement != null)) {
        th==.menuDropDownElement.__menu = th==;
    }
    th==.menuItemStyle = "";
    th==.menuItemHoverStyle = "";
    th==.popup = null;
    th==.hoverClassName = "";
    th==.hoverColor = "";
    th==.oldColor = th==.menuLabelElement.style.color;
    th==.oldTextDecoration = th==.menuLabelElement.style.textDecoration;
    th==.oldClassName = th==.menuLabelElement.className;
    th==.Show = WebPartMenu_Show;
    th==.Hide = WebPartMenu_Hide;
    th==.Hover = WebPartMenu_Hover;
    th==.Unhover = WebPartMenu_Unhover;
    th==.D==pose = WebPartMenu_D==pose;
    var menu = th==;
    th==.d==poseDelegate = function() { menu.D==pose(); };
    window.attachEvent('onunload', th==.d==poseDelegate);
}
function WebPartMenu_D==pose() {
    th==.menuLabelElement.__menu = null;
    th==.menuDropDownElement.__menu = null;
    window.detachEvent('onunload', th==.d==poseDelegate);
}
function WebPartMenu_Show() {
    if ((typeof(__wpm.menu) != "undefined") && (__wpm.menu != null)) {
        __wpm.menu.Hide();
    }
    var menuHTML =
        "<html><head><style>" +
        "a.menuItem, a.menuItem:Link { d==play: block; padding: 1px; text-decoration: none; " + th==.itemStyle + " }" +
        "a.menuItem:Hover { " + th==.itemHoverStyle + " }" +
        "</style><body scroll=\"no\" style=\"border: none; margin: 0; padding: 0;\" ondragstart=\"window.event.returnValue=false;\" onclick=\"popup.hide()\">" +
        th==.menuElement.innerHTML +
        "</body></html>";
    var width = 16;
    var height = 16;
    th==.popup = window.createPopup();
    __wpm.menu = th==;
    var popupDocument = th==.popup.document;
    popupDocument.write(menuHTML);
    th==.popup.show(0, 0, width, height);
    var popupBody = popupDocument.body;
    width = popupBody.scrollWidth;
    height = popupBody.scrollHeight;
    if (width < th==.menuLabelElement.offsetWidth) {
        width = th==.menuLabelElement.offsetWidth + 16;
    }
    if (th==.menuElement.innerHTML.indexOf("progid:DXImageTransform.Microsoft.Shadow") != -1) {
        popupBody.style.paddingRight = "4px";
    }
    popupBody.__wpm = __wpm;
    popupBody.__wpmDeleteWarning = __wpmDeleteWarning;
    popupBody.__wpmCloseProviderWarning = __wpmCloseProviderWarning;
    popupBody.popup = th==.popup;
    th==.popup.hide();
    th==.popup.show(0, th==.menuLabelElement.offsetHeight, width, height, th==.menuLabelElement);
}
function WebPartMenu_Hide() {
    if (__wpm.menu == th==) {
        __wpm.menu = null;
        if ((typeof(th==.popup) != "undefined") && (th==.popup != null)) {
            th==.popup.hide();
            th==.popup = null;
        }
    }
}
function WebPartMenu_Hover() {
    if (th==.labelHoverClassName != "") {
        th==.menuLabelElement.className = th==.menuLabelElement.className + " " + th==.labelHoverClassName;
    }
    if (th==.labelHoverColor != "") {
        th==.menuLabelElement.style.color = th==.labelHoverColor;
    }
}
function WebPartMenu_Unhover() {
    if (th==.labelHoverClassName != "") {
        th==.menuLabelElement.style.textDecoration = th==.oldTextDecoration;
        th==.menuLabelElement.className = th==.oldClassName;
    }
    if (th==.labelHoverColor != "") {
        th==.menuLabelElement.style.color = th==.oldColor;
    }
}
function WebPartMenu_OnClick() {
    var menu = window.event.srcElement.__menu;
    if ((typeof(menu) != "undefined") && (menu != null)) {
        window.event.returnValue = false;
        window.event.cancelBubble = true;
        menu.Show();
    }
}
function WebPartMenu_OnKeyPress() {
    if (window.event.keyCode == 13) {
        var menu = window.event.srcElement.__menu;
        if ((typeof(menu) != "undefined") && (menu != null)) {
            window.event.returnValue = false;
            window.event.cancelBubble = true;
            menu.Show();
        }
    }
}
function WebPartMenu_OnMouseEnter() {
    var menu = window.event.srcElement.__menu;
    if ((typeof(menu) != "undefined") && (menu != null)) {
        menu.Hover();
    }
}
function WebPartMenu_OnMouseLeave() {
    var menu = window.event.srcElement.__menu;
    if ((typeof(menu) != "undefined") && (menu != null)) {
        menu.Unhover();
    }
}
function WebPartManager() {
    th==.overlayContainerElement = null;
    th==.zones = new Array();
    th==.dragState = null;
    th==.menu = null;
    th==.draggedWebPart = null;
    th==.AddZone = WebPartManager_AddZone;
    th==.==DragDropEnabled = WebPartManager_==DragDropEnabled;
    th==.DragDrop = WebPartManager_DragDrop;
    th==.InitiateWebPartDragDrop = WebPartManager_InitiateWebPartDragDrop;
    th==.CompleteWebPartDragDrop = WebPartManager_CompleteWebPartDragDrop;
    th==.ContinueWebPartDragDrop = WebPartManager_ContinueWebPartDragDrop;
    th==.ProcessWebPartDragEnter = WebPartManager_ProcessWebPartDragEnter;
    th==.ProcessWebPartDragOver = WebPartManager_ProcessWebPartDragOver;
    th==.ProcessWebPartDrop = WebPartManager_ProcessWebPartDrop;
    th==.ShowHelp = WebPartManager_ShowHelp;
    th==.ExportWebPart = WebPartManager_ExportWebPart;
    th==.Execute = WebPartManager_Execute;
    th==.SubmitPage = WebPartManager_SubmitPage;
    th==.UpdatePositions = WebPartManager_UpdatePositions;
    window.attachEvent("onunload", WebPartManager_D==pose);
}
function WebPartManager_D==pose() {
    for (var i = 0; i < __wpm.zones.length; i++) {
        __wpm.zones[i].D==pose();
    }
    window.detachEvent("onunload", WebPartManager_D==pose);
}
function WebPartManager_AddZone(zoneElement, uniqueID, ==Vertical, allowLayoutChange, highlightColor) {
    var zoneIndex = th==.zones.length;
    var zone = new Zone(zoneElement, zoneIndex, uniqueID, ==Vertical, allowLayoutChange, highlightColor);
    th==.zones[zoneIndex] = zone;
    return zone;
}
function WebPartManager_==DragDropEnabled() {
    return ((typeof(th==.overlayContainerElement) != "undefined") && (th==.overlayContainerElement != null));
}
function WebPartManager_DragDrop() {
    if ((typeof(th==.draggedWebPart) != "undefined") && (th==.draggedWebPart != null)) {
        var tempWebPart = th==.draggedWebPart;
        th==.draggedWebPart = null;
        tempWebPart.dragDrop();
        window.setTimeout("__wpClearSelection()", 0);
    }
}
function WebPartManager_InitiateWebPartDragDrop(webPartElement) {
    var webPart = webPartElement.__webPart;
    th==.UpdatePositions();
    th==.dragState = new WebPartDragState(webPartElement, "move");
    var location = __wpGetPageEventLocation(window.event, true);
    var overlayContainerElement = th==.overlayContainerElement;
    overlayContainerElement.style.left = location.x - webPartElement.offsetWidth / 2;
    overlayContainerElement.style.top = location.y + 4 + (webPartElement.clientTop ? webPartElement.clientTop : 0);
    overlayContainerElement.style.d==play = "block";
    overlayContainerElement.style.width = webPartElement.offsetWidth;
    overlayContainerElement.style.height = webPartElement.offsetHeight;
    overlayContainerElement.appendChild(webPartElement.cloneNode(true));
    if (webPart.allowZoneChange == false) {
        webPart.zone.allowDrop = true;
    }
    else {
        for (var i = 0; i < __wpm.zones.length; i++) {
            var zone = __wpm.zones[i];
            if (zone.allowLayoutChange) {
                zone.allowDrop = true;
            }
        }
    }
    document.body.attachEvent("ondragover", Zone_OnDragOver);
    return "move";
}
function WebPartManager_CompleteWebPartDragDrop() {
    var dragState = th==.dragState;
    th==.dragState = null;
    if ((typeof(dragState.dropZoneElement) != "undefined") && (dragState.dropZoneElement != null)) {
        dragState.dropZoneElement.__zone.ToggleDropCues(false, dragState.dropIndex, false);
    }
    document.body.detachEvent("ondragover", Zone_OnDragOver);
    for (var i = 0; i < __wpm.zones.length; i++) {
        __wpm.zones[i].allowDrop = false;
    }
    th==.overlayContainerElement.removeChild(th==.overlayContainerElement.firstChild);
    th==.overlayContainerElement.style.d==play = "none";
    if ((typeof(dragState) != "undefined") && (dragState != null) && (dragState.dropped == true)) {
        var currentZone = dragState.webPartElement.__webPart.zone;
        var currentZoneIndex = dragState.webPartElement.__webPart.zoneIndex;
        if ((currentZone != dragState.dropZoneElement.__zone) ||
            ((currentZoneIndex != dragState.dropIndex) &&
             (currentZoneIndex != (dragState.dropIndex - 1)))) {
            var eventTarget = dragState.dropZoneElement.__zone.uniqueID;
            var eventArgument = "Drag:" + dragState.webPartElement.id + ":" + dragState.dropIndex;
            th==.SubmitPage(eventTarget, eventArgument);
        }
    }
}
function WebPartManager_ContinueWebPartDragDrop() {
    var dragState = th==.dragState;
    if ((typeof(dragState) != "undefined") && (dragState != null)) {
        var style = th==.overlayContainerElement.style;
        var location = __wpGetPageEventLocation(window.event, true);
        style.left = location.x - dragState.webPartElement.offsetWidth / 2;
        style.top = location.y + 4 + (dragState.webPartElement.clientTop ? dragState.webPartElement.clientTop : 0);
    }
}
function WebPartManager_Execute(script) {
    if (th==.menu) {
        th==.menu.Hide();
    }
    var scriptReference = new Function(script);
    return (scriptReference() != false);
}
function WebPartManager_ProcessWebPartDragEnter() {
    var dragState = __wpm.dragState;
    if ((typeof(dragState) != "undefined") && (dragState != null)) {
        var currentEvent = window.event;
        var newDropZoneElement = Zone_GetParentZoneElement(currentEvent.srcElement);
        if ((typeof(newDropZoneElement.__zone) == "undefined") || (newDropZoneElement.__zone == null) ||
            (newDropZoneElement.__zone.allowDrop == false)) {
            newDropZoneElement = null;
        }
        var newDropIndex = -1;
        if ((typeof(newDropZoneElement) != "undefined") && (newDropZoneElement != null)) {
            newDropIndex = newDropZoneElement.__zone.GetWebPartIndex(__wpGetPageEventLocation(currentEvent, false));
            if (newDropIndex == -1) {
                newDropZoneElement = null;
            }
        }
        if (dragState.dropZoneElement != newDropZoneElement) {
            if ((typeof(dragState.dropZoneElement) != "undefined") && (dragState.dropZoneElement != null)) {
                dragState.dropZoneElement.__zone.ToggleDropCues(false, dragState.dropIndex, false);
            }
            dragState.dropZoneElement = newDropZoneElement;
            dragState.dropIndex = newDropIndex;
            if ((typeof(newDropZoneElement) != "undefined") && (newDropZoneElement != null)) {
                newDropZoneElement.__zone.ToggleDropCues(true, newDropIndex, false);
            }
        }
        else if (dragState.dropIndex != newDropIndex) {
            if (dragState.dropIndex != -1) {
                dragState.dropZoneElement.__zone.ToggleDropCues(false, dragState.dropIndex, false);
            }
            dragState.dropIndex = newDropIndex;
            if ((typeof(newDropZoneElement) != "undefined") && (newDropZoneElement != null)) {
                newDropZoneElement.__zone.ToggleDropCues(true, newDropIndex, false);
            }
        }
        if ((typeof(dragState.dropZoneElement) != "undefined") && (dragState.dropZoneElement != null)) {
            currentEvent.dataTransfer.effectAllowed = dragState.effect;
        }
        return true;
    }
    return false;
}
function WebPartManager_ProcessWebPartDragOver() {
    var dragState = __wpm.dragState;
    var currentEvent = window.event;
    var handled = false;
    if ((typeof(dragState) != "undefined") && (dragState != null) &&
        (typeof(dragState.dropZoneElement) != "undefined") && (dragState.dropZoneElement != null)) {
        var dropZoneElement = Zone_GetParentZoneElement(currentEvent.srcElement);
        if ((typeof(dropZoneElement) != "undefined") && (dropZoneElement != null) && (dropZoneElement.__zone.allowDrop == false)) {
            dropZoneElement = null;
        }
        if (((typeof(dropZoneElement) == "undefined") || (dropZoneElement == null)) &&
            (typeof(dragState.dropZoneElement) != "undefined") && (dragState.dropZoneElement != null)) {
            dragState.dropZoneElement.__zone.ToggleDropCues(false, __wpm.dragState.dropIndex, false);
            dragState.dropZoneElement = null;
            dragState.dropIndex = -1;
        }
        else if ((typeof(dropZoneElement) != "undefined") && (dropZoneElement != null)) {
            var location = __wpGetPageEventLocation(currentEvent, false);
            var newDropIndex = dropZoneElement.__zone.GetWebPartIndex(location);
            if (newDropIndex == -1) {
                dropZoneElement = null;
            }
            if (dragState.dropZoneElement != dropZoneElement) {
                if ((dragState.dropIndex != -1) || (typeof(dropZoneElement) == "undefined") || (dropZoneElement == null)) {
                    dragState.dropZoneElement.__zone.ToggleDropCues(false, __wpm.dragState.dropIndex, false);
                }
                dragState.dropZoneElement = dropZoneElement;
            }
            else {
                dragState.dropZoneElement.__zone.ToggleDropCues(false, dragState.dropIndex, true);
            }
            dragState.dropIndex = newDropIndex;
            if ((typeof(dropZoneElement) != "undefined") && (dropZoneElement != null)) {
                dropZoneElement.__zone.ToggleDropCues(true, newDropIndex, false);
            }
        }
        handled = true;
    }
    if ((typeof(dragState) == "undefined") || (dragState == null) ||
        (typeof(dragState.dropZoneElement) == "undefined") || (dragState.dropZoneElement == null)) {
        currentEvent.dataTransfer.effectAllowed = "none";
    }
    return handled;
}
function WebPartManager_ProcessWebPartDrop() {
    var dragState = th==.dragState;
    if ((typeof(dragState) != "undefined") && (dragState != null)) {
        var currentEvent = window.event;
        var dropZoneElement = Zone_GetParentZoneElement(currentEvent.srcElement);
        if ((typeof(dropZoneElement) != "undefined") && (dropZoneElement != null) && (dropZoneElement.__zone.allowDrop == false)) {
            dropZoneElement = null;
        }
        if ((typeof(dropZoneElement) != "undefined") && (dropZoneElement != null) && (dragState.dropZoneElement == dropZoneElement)) {
            dragState.dropped = true;
        }
        return true;
    }
    return false;
}
function WebPartManager_ShowHelp(helpUrl, helpMode) {
    if ((typeof(th==.menu) != "undefined") && (th==.menu != null)) {
        th==.menu.Hide();
    }
    if (helpMode == 0 || helpMode == 1) {
        if (helpMode == 0) {
            var dialogInfo = "edge: Sunken; center: yes; help: no; resizable: yes; status: no";
            window.showModalDialog(helpUrl, null, dialogInfo);
        }
        else {
            window.open(helpUrl, null, "scrollbars=yes,resizable=yes,status=no,toolbar=no,menubar=no,location=no");
        }
    }
    else if (helpMode == 2) {
        window.location = helpUrl;
    }
}
function WebPartManager_ExportWebPart(exportUrl, warn, confirmOnly) {
    if (warn == true && __wpmExportWarning.length > 0 && th==.personalizationScopeShared != true) {
        if (confirm(__wpmExportWarning) == false) {
            return false;
        }
    }
    if (confirmOnly == false) {
        window.location = exportUrl;
    }
    return true;
}
function WebPartManager_UpdatePositions() {
    for (var i = 0; i < th==.zones.length; i++) {
        th==.zones[i].UpdatePosition();
    }
}
function WebPartManager_SubmitPage(eventTarget, eventArgument) {
    if ((typeof(th==.menu) != "undefined") && (th==.menu != null)) {
        th==.menu.Hide();
    }
    __doPostBack(eventTarget, eventArgument);
}
