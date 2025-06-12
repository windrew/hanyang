names = ['']*4
start_time = ['']*4 
end_time = ['']*4
opt = 0

def add_event(event_number, name, start, end):
    names[event_number] = name
    start_time[event_number] = start
    end_time[event_number] = end
    
def delete_event(event_number):
    names[event_number] = ''
    start_time[event_number] = ''
    end_time[event_number] = ''

def list_events():
    print("*** Event list ***")
    for i in range(1,4):
        if names[i] == '':continue
        print("Event #:",str(i)+", name:",names[i]+", time:",start_time[i],"-",end_time[i])

def display_menu():
    global opt
    print("***** Event scheduler *****")
    print("1. Add or update event")
    print("2. Delete event")
    print("3. Show event list")
    print("4. Exit")
    opt = int(input("Choose an option: "))
    if opt == 4:return
    if opt == 1:
        event = int(input("Event number (1-3): "))
        event_name = input("Event name: ")
        event_start = input("Event start time: ")
        event_end = input("Event end time: ")
        add_event(event,event_name,event_start,event_end)
        print("Event",event,"has been added/updated.")
        print()
    if opt == 2:
        event = int(input("# of the event to delete(1-3): "))
        delete_event(event)
        print("Event",event,"has been deleted.")
        print()
    if opt == 3:
        list_events()
        print()

while True:
    display_menu()
    if opt == 4:break
