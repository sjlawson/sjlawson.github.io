---
layout: post
title: On development standards
date: 2025-06-16 
categories: Code
picture: 
  path: /assets/img/code_icon.png 
---


## A few words on development standards

To me, enacting reasonable software engineering standards ensures code quality, maintainability, and collaboration. In Python, adhering to PEP8 style guide improves readability and consistency.  Javascript benefits from using linters like ESLint to enforce coding conventions and catch potential errors early. Data engineering leverages standards like defining clear schema using JSON Schema for data validation and consistency across different data sources and pipelines. These standards, while language-specific in their implementation details, share the common goal of enhancing software development practices.  

Another important facet of engineering standards is testing. While working at Angie’s List, I was given the task of building a completely new automated testing framework. I created a system that allowed my development team to implement behavioral-driven testing practices as part of their TDD for backend and frontend services. We used ESLint, Jest, and Cucumber for front-end code style and testing, Unittest and Behave for Python, as well as PHP unit testing framework.   

Nearly every project I’ve been a part of since then has implemented unit testing and linting. I use “Black” and Flake8 for Python code standards in my projects and ESLint for EcmaScript/JavaScript projects. I’ve since moved more towards PyTest for Python testing. While PEP8 rules are good for overall code standards, sometimes projects demand slight alterations for collaboration and readability. MOst of the time the only PEP8 rule I routinely change is the line length – 79 characters is sometimes too short for projects involving APIs in which a single URL might exceed the line length.  

In the area of API development, I’ve extensively used Django Rest Framework, Flask-RestX, FastAPI, and Pydantic to ensure data schema compliance, validation, and safety. In general, a software development team should employ automated tools to keep code clean and compliant – standards like PEP8 are lengthy and I wouldn’t ever expect anyone to memorize such a thing while one’s main focus should be on creating clean & readable code. When it comes to overall program design, like keeping program logic separated from business logic, it is the job of the team to perform code reviews and make suggestions for improvements and ensure that code is well-tested.  
