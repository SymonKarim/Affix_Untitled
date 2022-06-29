import React, { useEffect } from 'react';
import { useSelector } from 'react-redux';
import { Route, Switch, Redirect } from 'react-router-dom';
import { AnimatePresence } from 'framer-motion';
import Styled from 'styled-components';

//importing custom component
import Login from './login/login.component';
import Signup from './signup/signup.component';

//importing background
// import background from './Cover.jpg';
import background from './Cover.gif';

const Auth = ({ match, location, history }) => {

    const user = useSelector(state => state.user);

    useEffect(() => {
        const { _id } = user;
        if (_id) {
            history.push('/');
        }
    }, [history, user]);

    return (
        <Container>
            <div className="overlay">
                <div className="imageContainer" />
                <div className="formContainer">
                    <AnimatePresence exitBeforeEnter initial={false}>
                        <Switch location={location} key={location.pathname}>
                            <Route exact path={`${match.url}`}>
                                <Redirect to={`${match.url}/login`} />
                            </Route>
                            <Route path={`${match.url}/login`} component={Login} />
                            <Route path={`${match.url}/signup`} component={Signup} />
                            <Redirect to='/404' />
                        </Switch>
                    </AnimatePresence>
                </div>
            </div>
        </Container>

    );
}

const Container = Styled.div`
    height:100%;
    width:100%;
    background-image:${props => `url(${background})`};
    background-size:cover;
    background-position:center;
    background-repeat:no-repeat;
    &>.overlay{
        height:100%;
        width:100%;
        background-color: rgba(0,0,0,.7);
        display:flex;
        align-items: center;
        justify-content: center;
        &>.imageContainer{
            width:40%;
            height:80%;
            background-image:${props => `url(${background})`};
            background-position:center;
            background-size:cover;
            border-top-left-radius:10px;
            border-bottom-left-radius:10px;
            background-repeat:no-repeat;
            
        }
        &>.formContainer{
            width:40%;
            height:80%;
            background-color:white;
            border-top-right-radius:10px;
            border-bottom-right-radius:10px;
            overflow:hidden;
        }
    }
`;

export default Auth;