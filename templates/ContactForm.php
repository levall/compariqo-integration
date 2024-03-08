<?php
/*
Template Name: Salesforce Contact Form
*/
?>
<div class="col-12">
    <form class="d-flex flex-column col-6">
        <div class="d-flex flex-row mb-3 justify-content-between">
            <label class="text-white mr-3" for="userName">Name</label>
            <input class="form-control" type="text" name="Name" id="userName" placeholder="Your Name" />
        </div>
        <div class="d-flex flex-row mb-3 justify-content-between">
            <label class="text-white mr-3" for="userCompany">Company name</label>
            <input class="form-control" type="text" name="Company" id="userCompany" placeholder="Company" />
        </div>
        <div class="d-flex flex-row mb-3 justify-content-between">
            <label class="text-white mr-3" for="userPhone">Phone Number</label>
            <input class="form-control" type="text" name="userPhone" id="userPhone" placeholder="Phone Number" />
        </div>
        <div class="d-flex flex-row mb-5 justify-content-between">
            <label class="text-white mr-3" for="userEmail">Email address:</label>
            <input class="form-control" type="text" name="Enail" id="userEmial" placeholder="Email address" />
        </div>
        <div class="d-flex flex-row mb-5 justify-content-between">
            <div></div>
            <input id="submit" type="submit" name="Submit" class="submit col-3 btn btn-light" value="Submit" />
            <div></div>
        </div>
    </form>
</div>
