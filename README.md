 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Rate My Doctor
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: \<[Nichole Godfrey](https://github.com/nicholegodfrey)\>
> \<[Edward Liu](https://github.com/edwardliu576)\>
> \<[Vidhi Tapde](https://github.com/vidhitapde)\>
> \<[Rachel Chan](https://github.com/rachel-chan1)\>

 > You will be forming a group of **FOUR** students and working on an interesting project. The project has 4 phases, each one with specific requirements. A list of proposed project ideas that have been successful in previous quarters is listed in the project specifications document on Canvas. You can select an idea from the list and start thinking about the features you will implement. If you want to propose your own original idea, you will have to contact your instructor to discuss the project and obtain written permission before you submit your project proposal (Phase 1). The project work should be divided almost equally among team members. You can of course help each other, but it needs to be clear who will be responsible for which features. Additionally, you are expected to follow Scrum patterns, specifically the use of a Scrum (Project) board, Sprints, and Scrum meetings.

 > ## Expectations
 > * The backend of your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
 > * **Each member of the group must actively participate in the Github Project board, writing unit tests, and reviewing commited code.**
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold two to three scrum/check-in meetings with your lab TA/reader at different times in addition to the final demo.

## Project Description
 Why is it important or interesting to you?
 > * We wanted to expand upon the Library System project idea, by applying it to a real-world application in terms of healthcare! We took inspiration from “Rate My Professor” to create “Rate My Doctor” a database where users can view and add ratings/reviews for doctors, receive suggestions based on their recent locations, find healthcare professionals based on their specialty and ratings to schedule appointments. Doctors from hospitals and private practices can create their own profiles. This idea is important to us because we want to create a platform that promotes reliable healthcare to our users. 

 What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 > * We will use C++ to implement our system. We will also get a dataset of doctors.

 What will be the input/output of your project?
 > User inputs:
 >   * Sign up for accounts
 >   * Log in
 >   * Reviews/ratings
 >   * Schedule Appointments
 >   * User Location
 >   * Favorite certain doctors

 > User outputs:
 > * Display doctors based on specialty and average rating or location
 > * Suggestions for other nearby doctors based on location
 > * Top rated doctors
 > * Community reviews/ratings

 > Administrative accounts (hospitals, private practices):
 > * Hospital info
 > * add/edit/remove doctor profiles
 >  Administrative accounts (hospitals, private practices) output:
 > * Updated profiles 

What are the features that the project provides?
> Users:
> * Sign up for accounts
> * Schedule Appointments
> * Leave and view reviews
> * View doctors based on specialty and average rating or location
> * Receive suggestions for other nearby doctors based on location

> Administrative accounts (hospitals, private practices):
> * Create a profile to display hospital/clinic info 
> * Doctors can add/edit/remove profiles


 > This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 
 > 
 > You also need to set up an empty project board using GitHub projects (board view with default columns). Make sure you add the board under your project repository. You should also have a Product Backlog and In testing columns added. All columns should be in the right order.
 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column (aka Sprint Backlog).
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Each team member needs to submit the Individual Contributions Form on Canvas for this phase. In this form, you need to fill in the names of all team members, the percentage of work contributed by each member for phase  II, and a description of their contributions. Remember that each team member should submit the form individually.
 > * Schedule two check-ins using Calendly. Both time slots should be during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from the User Interface Design Document Template of CMSC 345 at the University of Maryland Global Campus)

### Navigation Diagram
> The diagram shows how users (either doctors, hospitals, or community users) will navigate through our application to access each feature. 
<img width="814" alt="Screenshot 2024-12-06 at 3 25 33 AM" src="https://github.com/user-attachments/assets/534e50bc-7bf2-44ae-8de5-7f6820b6e340">


### Screen Layouts
> "screens" will take place in terminal. Below is an outline of what will be displayed.
<img width="801" alt="Screenshot 2024-12-06 at 3 25 03 AM" src="https://github.com/user-attachments/assets/0b98defc-5096-45ed-8c7b-ff5cfefe7e77">


## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).

> The diagram shows the relationship between our main classes: the BaseEntity, User, Doctor, Hospital, Appointment, and Review classes. The attributes and methods are listed to show the desired behavior of each class. Multiplicity is included.
>
> After reviewing the SOLID principles, the diagram has now been updated.
>
> Change #1: Applied the Liskov Substitution Principle (LSP) and Open/Closed Principle (OCP) by adding inheritance across multiple classes. All classes inherit from the Account class due to the fact that they can share its variables, such as name, ID, and x and y-coordinates of location. This improves the code greatly because it drastically reduces code duplication, and subclasses can be substituted for the base (LSP). New subclasses can even be added to extend the functionality without touching the already-existing code (OCP).
> 
> Change #2: Applied the single responsibility principle (SRP) by changing the location variables of the Account class from doubles to a string. Originally, there were two location variables: an x-coordinate and a y-coordinate. This change refocused the Account class's responsibility to have a more general representation of a location. This improved the code since now it is easier to maintain and extend without affecting other parts of the code (it is only necessary to change one thing now instead of two).
> 
> Change #3: Applied the Open-Closed Principle (OCP) and Dependency Inversion Principle (DIP) by replacing some inheritance relationships with aggregation. Specifically, the Review and Appointment classes now form aggregations with the User class instead of inheriting from the Account class. This improved the code because aggregation makes the system more flexible, and new components and behavior can be extended without changing the existing code (OCP). Additionally, the high-level logic now no longer depends on the low-level details (DIP).
<img width="1132" alt="image" src="https://github.com/user-attachments/assets/402b4f53-58cf-4299-9fab-b4ef69a084da">

 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * Make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
>  * Each team member should also submit the Individual Contributions Form on Canvas for phase III. In this form, you need to fill in the names of all team members, the percentage of work contributed by each member for phase III, and a description of their contributions. Remember that each team member should submit the form individually.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history.
>  * Each team member should also submit the Individual Contributions Form on Canvas for this final phase. In this form, you need to fill in the names of all team members, the percentage of work contributed by each member for the final phase, and a description of their contributions. Remember that each team member should submit the form individually.
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
